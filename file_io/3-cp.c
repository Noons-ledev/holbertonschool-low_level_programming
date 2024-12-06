#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * open_filefrom - Opens a given file
 * @file_from: the file to open
 * Return: file descriptor
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
 * open_fileto - Opens the file to copy data to (create it if needed)
 * @file_to: File to write to
 * Return: File descriptor
 */
int open_fileto(const char *file_to)
{
int fd_dest;
fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_dest == -1)
{
dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", file_to);
exit(99);
}
return (fd_dest);
}

/**
 * write_to_file - Writes buffer data to a file
 * @file_to: File name for error messages
 * @fd_dest: File descriptor of the destination file
 * @buffer: Buffer containing data to write
 * @read_bytes: Number of bytes read from source file
 * Return: 1 on success
 */
int write_t(const char *file_to, int fd_dest, char *buffer, ssize_t read_bytes)
{
ssize_t written_bytes = write(fd_dest, buffer, read_bytes);
if (written_bytes != read_bytes)
{
dprintf(STDOUT_FILENO, "Error: Can't write to file %s\n", file_to);
exit(99);
}
return (1);
}

/**
 * read_and_copy - Reads from source file and writes to destination file
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
if (strcmp(file_from, file_to) == 0)
{
dprintf(STDERR_FILENO, "Error: Source and destination files are the same\n");
exit(100);
}
fd_src = open_filefrom(file_from);
fd_dest = open_fileto(file_to);
while ((read_bytes = read(fd_src, buffer, bytes)) > 0)
{
write_t(file_to, fd_dest, buffer, read_bytes);
}
if (read_bytes < 0)
{
close(fd_dest);
close(fd_src);
dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}
if (close(fd_dest) == -1)
{
dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd_dest);
exit(100);
}
if (close(fd_src) == -1)
{
dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd_src);
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
dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
read_and_copy(argv[1], argv[2], bytes);
return (0);
}
