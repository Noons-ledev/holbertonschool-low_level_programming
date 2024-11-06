#include <stdio.h>
#include <stdlib.h>
/**
 *main- prints all arguments one per line
 *@argc: arg count
 *@argv: arg array
 *Return: Always 0 (main)
 */
int main(int argc, char *argv[])
{
int a;
for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
return (0);
}
