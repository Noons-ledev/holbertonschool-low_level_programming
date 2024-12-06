#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
* open_filefrom - Opens a given file for reading
* @file_from: The file to open
* Return: File descriptor for the source file
*/
int open_filefrom(const char *file_from)
{
int fd_src;
fd_src = open(file_from, O_RDONLY);
if (fd_src == -1)
{
dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}
return (fd_src);
}

/**
* open_fileto - Opens the destination file for writing
* @file_to: The file to write to
*@file_from: the source file
* Return: File descriptor for the destination file
*/
int open_fileto(const char *file_to, const char *file_from)
{
int fd_dest;
if (_strcasecmp(file_from, file_to) == 0)
{
fd_dest = open(file_to, O_WRONLY | O_CREAT, 0664);
if (fd_dest == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
exit(99);
}
}
else
{
fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_dest == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
exit(99);
}
}
return (fd_dest);
}

/**
* write_t - Writes buffer data to the destination file
* @file_to: File name for error messages
* @fd_dest: File descriptor of the destination file
* @buffer: Buffer containing data to write
* @read_bytes: Number of bytes read from source file
* Return: 1 on success
*/
int write_t(const char *file_to, int fd_dest, char *buffer, ssize_t read_bytes)
{
ssize_t written_bytes = write(fd_dest, buffer, read_bytes);
if (written_bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
exit(98);
}
return (1);
}
/**
* _strcasecmp - Compares two strings ignoring case.
* @str1: The first string to compare.
* @str2: The second string to compare.
*
* Return:
*      0 if the strings are equal (ignoring case),
*      < 0 if str1 is lexicographically less than str2 (ignoring case),
*      > 0 if str1 is lexicographically greater than str2 (ignoring case).
*/
int _strcasecmp(const char *str1, const char *str2)
{
while (*str1 != '\0' && *str2 != '\0')
{
char c1 = (*str1 >= 'A' && *str1 <= 'Z') ? *str1 + 32 : *str1;
char c2 = (*str2 >= 'A' && *str2 <= 'Z') ? *str2 + 32 : *str2;

if (c1 != c2)
return (c1 - c2);

str1++;
str2++;
}
return (*str1 - *str2);
}



/**
* read_and_copy - Reads from the source file and writes to the destination file
* @file_from: Source file
* @file_to: Destination file
* @bytes: Buffer size (1024)
* Return: 1 on success
*/
int read_and_copy(const char *file_from, const char *file_to, size_t bytes)
{
int fd_src, fd_dest;
char buffer[1024];
ssize_t read_bytes;

fd_src = open_filefrom(file_from);
fd_dest = open_fileto(file_to, file_from);

while ((read_bytes = read(fd_src, buffer, bytes)) > 0)
{
write_t(file_to, fd_dest, buffer, read_bytes);
}

if (read_bytes < 0)
{
close(fd_dest);
close(fd_src);
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}
if (close(fd_dest) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
exit(100);
}
if (close(fd_src) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
exit(100);
}

return (1);
}

/**
* main - Entry point of the program
* @argc: Argument count
* @argv: Argument vector
* Return: 0 on success
*/
int main(int argc, char **argv)
{
size_t bytes = 1024;


if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
read_and_copy(argv[1], argv[2], bytes);
return (0);
}
