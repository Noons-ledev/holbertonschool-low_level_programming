#include <stdio.h>

/**
 *main-Entry of program
 *Description: Print alphabet without printf or puts
 *Return: Always return 0(Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}