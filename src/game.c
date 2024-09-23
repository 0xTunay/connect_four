#include <stdio.h>
#include "../include/playrs.h"

void step_playrs(void)
{
    info *inital_matrix;

    int x, y;
    puts("Enter the coordinates (x, y) for your move: ");
    scanf("%d%*c%d", &x, &y);
    
    x--;
    y--;

    if (inital_matrix->matrix[x][y] != ' ')
    {
        puts("Invalid move, try again");
        step_playrs();
    }
    else
    {
        inital_matrix->matrix[x][y] = 'X';
    }

}
