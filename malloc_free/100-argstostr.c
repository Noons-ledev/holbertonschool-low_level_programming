#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
*string_length- Renvoie la longueur d'une chaine de caractères
*@str:Pointeur vers cette chaine de charactères
*Return: Integer type
*/
int string_length(char *str)
{
int a = 0;
while (str[a] != '\0')
a++;
return (a);
}
/**
*argstostr- args to string
*@ac: arg count
*@av: ** of args
*Return: Pointer char
*/
char *argstostr(int ac, char **av)
{
char *DoIt;
int a = 0, b = 0, c = 0, d = 0;
if (ac == 0 || av == NULL)
return (NULL);
while (a < ac)
{
b += (string_length(*(av + a)) + 1);
a++;
}
DoIt = malloc(b + 1);
if (DoIt == NULL)
return (NULL);
a = 0;
while (a < ac)
{
c = 0;
while (av[a][c] != '\0')
{
DoIt[d] = av[a][c];
c++;
d++;
}
DoIt[d] = '\n';
d++;
a++;
}
DoIt[d] = '\0';
return (DoIt);
}
