#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
*_strlen- length of a const string
*@b: Binary number passed as a string as argument
*Return: The length
*/
int _strlen(const char* b)
{
int i = 0;
if (b == NULL)
return (0);
while (b[i] != '\0')
{
	i++;
}
return (i);
}

/**
*binary_to_uint- converts a binary to an unsigned int
*@b: String passed
*Return: The base 10 result
*/
unsigned int binary_to_uint(const char *b)
{
	int b_len, a, result = 0;
	if (b == NULL)
	return (0);
for (a = 0; b[a] != '\0'; a++)
{
	if (b[a] == '1')
	{
		result = result + (2<<(_strlen(b) - a - 1));
	}
	if (b[a] != '0' && b[a] != '1')
	return (0);
}
return (result);
}