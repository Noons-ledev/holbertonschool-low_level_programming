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
*append_text_to_file- Lis lettersx letters of a file
*@filename: Pointer to the file
*@letters: Numbers of letters to read
*Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t written;

	if (filename == NULL)
	return (-1);
fd = open(filename,O_RDWR | O_APPEND);
	if (fd == -1)
	return (-1);
written = write(fd, text_content, _strlen(text_content));
if (written == -1)
	{	
	close(fd);
	return (-1);
	}
close(fd);
return (1);
}
