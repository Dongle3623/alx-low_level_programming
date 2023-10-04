#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: Pointer to the grid
 * @height: Height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;
/* Check if grid or height is NULL or less than or equal to 0 */
if (grid == NULL || height <= 0)
return;
/* Free each row in the grid */
for (i = 0; i < height; i++)
free(grid[i]);
/* Free the grid */
free(grid);
}
