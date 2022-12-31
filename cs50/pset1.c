#include <stdio.h>

int main(void)
{
    int height, row, col, space;

    do
    {
        printf("Height: ");
        scanf("%d", &height);
    } 
    while (height < 1 || height > 8);

    for (row = 0; row < height; row++)
    {
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }

        for (col = 0; col <= row; col++)
        {
            printf("#");
        }

        printf("  ");

        for (col = 0; col <= row; col++)
        {
            printf("#");
        }

        printf("\n");
    }
    
}

// prompt user for input
// implement condition to continuing prompting if user enters num less than one and greater than 8.