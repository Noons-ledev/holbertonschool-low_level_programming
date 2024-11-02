#include "main.h"
/**
 *rot13- convert into rot13
 *@t: string to convert
 *description:
 *Return: t
 */
char *rot13(char *t)
{
char *realone = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *classique = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
int a, b;
for (a = 0; t[a] != '\0'; a++)
{
for (b = 0; classique[b] != '\0'; b++)
{
if (classique[b] == t[a])
{
t[a] = realone[b];
break;
}
}
}
return (t);
}

