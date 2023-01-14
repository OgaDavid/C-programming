#include <stdio.h>

// declaring functions


int main(void)
{
    // get inputs
    int x, y;
    char operation;

    printf("What is the operation? Reply with either ( +, -, * or /): ");
    scanf("%c", &operation);

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (operation == '+')
    {
        printf("%d + %d = %d", x, y, x + y);
    }
    else if (operation == '-')
    {
        printf("%d - %d = %d", x, y, x - y);
    }
    else if (operation == '*')
    {
        printf("%d * %d = %d", x, y, x * y);
    }
    else if (operation == '/')
    {
        printf("%d / %d = %d", x, y, x / y);
    }
    else{
        printf("Variable or operator is invalid.");
    }
    
    return 0;

}


// A CALCULATOR THAT PERFORMS BASIC OPERATIONS LIKE + - / * %

// get the inputs
// write out functions for each operator
// 
