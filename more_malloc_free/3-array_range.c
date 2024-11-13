#include <stdlib.h>
#include "main.h"
/**
*array_range- creates an array containing values from min to max
*@min: Integer to start with
*@max: Integer to reach
*Return: Pointer on array;
*/
int *array_range(int min, int max)
{
int *array;
int n;
int diff, a = 0;
if (min > max)
return (NULL);
diff = max - min + 1;
n = min ;
array = (int *)malloc(diff * sizeof(int));
if (array == NULL)
return (NULL);
for (a = 0; a < diff; a++)
{
*(array + a) = n;
n += 1;
}
return (array);
}
