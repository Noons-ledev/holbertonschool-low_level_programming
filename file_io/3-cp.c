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
    return fd_src;
}

/**
 * open_fileto - Opens the destination file for writing
 * @file_to: The file to write to
 * Return: File descriptor for the destination file
 */
int open_fileto(const char *file_to, const char *file_from)
{
    int fd_dest;
	 if (strcasecmp(file_from, file_to) == 0)
    {
        // Open without truncating the destination file
        fd_dest = open(file_to, O_WRONLY | O_CREAT, 0664);  // Don't truncate if same file
    }
    else
    {
    fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);  // Truncate file if it exists
    if (fd_dest == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", file_to);
        exit(99);
    }
	}
    return fd_dest;
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
    if (written_bytes != read_bytes)
    {
        dprintf(STDOUT_FILENO, "Error: Can't write to file %s\n", file_to);
        exit(99);
    }
    return 1;
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
        // Compare each character in a case-insensitive way
        char c1 = tolower((unsigned char)*str1);
        char c2 = tolower((unsigned char)*str2);
        
        if (c1 != c2) {
            return c1 - c2;  // Return the difference between the characters
        }
        
        // Move to the next character in both strings
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

    // If source and destination are the same, print an error and exit
    if (strcmp(file_from, file_to) == 0)
    {
        dprintf(STDERR_FILENO, "Error: Source and destination files are the same\n");
        exit(100);
    }

    fd_src = open_filefrom(file_from);
    fd_dest = open_fileto(file_to, file_from);

    // Read from source and write to destination
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

    // Close both files
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

    return 1;
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

    // Check for correct number of arguments
    if (argc != 3)
    {
        dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    // Call read_and_copy to perform the actual copy operation
    read_and_copy(argv[1], argv[2], bytes);
    
    return 0;
}
