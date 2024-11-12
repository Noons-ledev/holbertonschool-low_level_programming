#include <stdlib.h>
#include "main.h"
/**
 *free_grid- frees a 2d grid
 *@grid: Grid to work on
 *@height: Value needed to loop
 *Return: nothing void
 */

void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}
