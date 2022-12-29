#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d is greater than %d\n", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("%d is less than %d\n", num1, num2);
    }
    else{
        printf("%d is equal to %d\n", num1, num2);
    }
}

// PSEUDOCODE =>

// initialize num variables
// ask to input two numbers
// conditional to check for which is greater.
// print out which is greater.