#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main- entry
 *@argc: arg count
 *@argv: arg array
 *Return: 0 or 1 (error)
 */
int main(int argc, char **argv)
{
int sum = 0;
int i, a;
for (a = 1; a < argc; a++)
{
for (i = 0; argv[a][i] != '\0'; i++)
{
if (!isdigit(argv[a][i]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[a]);
}
printf("%d\n", sum);
return (0);
}
