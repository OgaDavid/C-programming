#include <stdio.h>

int main(void)
{
    char x[10];
    char y[10];
    printf("what is x? ");
    gets(x);
    printf("what is y? ");
    gets(y);
    

    if (x > y)
    {
        printf("x is greater than y\n");
    }
    else if (x < y)
    {
        printf("x is less than y!\n");
    }
    else
    {
        printf("The two numbers are equal!\n");
    }

    // print thank you after program ends.
    printf("Arigato goziamasu :)\n");

    return 0;
}

// PSEUDOCODE =>

// ask to input two numbers
// conditional to check for which is greater.
// print out which is greater.