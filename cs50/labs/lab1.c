#include <stdio.h>

int main(void)
{
    // prompt for starting size
    int start;

    do
    {
        printf("Start size: ");
        scanf("%i", &start);
    } while (start < 9);
    
    // prompt for end size
    int end;

    do
    {
        printf("End size: ");
        scanf("%i\n", &end);
    }
    while (end < start);

    // get the number of years
    int years = 0;

    while (start < end) 
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }

    // print out number of years
    printf("Years: %i\n", years);
}