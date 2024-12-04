#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
*_strlen- Returns length of a string
*@str: String
*Return: Size t type length
*/
size_t _strlen(char *str)
{
size_t i = 0;
	while (str[i] != '\0')
	i++;
return (i);
}

/**
*create_file- creates a file, if already existing, truncate it
*@filename: Name of the file
*@text_content: String to write in the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t written;
if (filename == NULL)
	return (-1);
fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | O_TRUNC);
if (fd == -1)
	return (-1);
if (text_content == NULL)
	text_content = "";
written = write(fd, text_content, _strlen(text_content));
if (written == -1)
	close(fd);
	return (-1);
return (1);
}
