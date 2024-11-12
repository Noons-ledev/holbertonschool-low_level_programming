#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid-Returns a 2D array
 *@width: Largeur
 *@height: Hauteur
 *Return: NULL or array
 */
int **alloc_grid(int width, int height)
{
int i, j, k;
int **array;
if (height < 1 || width < 1)
return (NULL);
array = (int **)malloc(height * sizeof(int *));
if (array == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
array[i] = (int *)malloc(width * sizeof(int));
if (array[i] == NULL)
{
for (k = 0; k < i; i++)
{
free(array[k]);
}
free(array);
return (NULL);
}
for (j = 0; j < width; j++)
{
array[i][j] = 0;
}
}
return (array);
}
