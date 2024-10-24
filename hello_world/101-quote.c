#include <stdio.h>
#include <unistd.h>
/**
 *main- Entry of program
 *Description: Print a message as stderr
 *Return: Return 1
 *
 */

int main(void)
{
write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

