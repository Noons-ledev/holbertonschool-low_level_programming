#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
*read_textfile- Lis lettersx letters of a file
*@filename: Pointer to the file
*@letters: Numbers of letters to read
*Return: Count of letters it could print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t written, readbytes;
int fd;

fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
buffer = malloc(letters * sizeof(char));
if (buffer == NULL)
	{
	close(fd);
	return (0);
	}
readbytes = read(fd, buffer, letters);
if (readbytes == -1)
	{
	free(buffer);
	close(fd);
	return (0);
	}
written = write(STDOUT_FILENO, buffer, readbytes);
if (written == -1 || written != readbytes)
{
	free(buffer);
	close(fd);
	return (0);
}
free(buffer);
close(fd);
return (written);
}
