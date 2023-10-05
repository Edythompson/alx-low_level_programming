#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - return a pointer to a two dimensional array
* @width: width of the array
* @height: height of the array
*Return: pointer to the array of int
*/
int **allooc_grid(int width, int height)
{
int i, j;
int **grid;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
free (grid);
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j=0; j < i; j++)
{
free (grid[j]);
}
free (grid);
return (NULL);
}
}
for (i =0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
