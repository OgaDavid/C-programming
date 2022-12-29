#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 5;

    if (x > y)
    {
        printf("x is greater than y!\n");
    }
    else if (x < y)
    {
        printf("x is less than y!\n");
    }
    else
    {
        printf("x is equal to y!\n");
    }
}