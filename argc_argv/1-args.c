#include <stdio.h>
#include <stdlib.h>
/**
 *main- Prints argc
 *@argc: arg count
 *@argv: arg array
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", (argc - 1));
return (0);
}
