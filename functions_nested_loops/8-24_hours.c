#include "main.h"
/**
 *jack_bauer - Print all minutes of his day
 *Description: Nested loops
 *Return: Nothing (void)
 */
void jack_bauer(void)
{
int heures = 00;
int minutes = 00;
int h1;
int h2;
int m1;
int m2;
 for (heures = 0; heures <= 23;)
{
h1 = heures / 10;
h2 = heures % 10;
m1 = minutes / 10;
m2 = minutes % 10;
if ( minutes == 60)
{
heures++;
minutes = 00;
}
while (minutes < 60 )
{ 
_putchar(h1 + '0') ;
_putchar(h2 + '0');
_putchar(':');
_putchar(m1 + '0');
_putchar(m2 + '0');
_putchar('\n');
minutes++;
}
}
}
