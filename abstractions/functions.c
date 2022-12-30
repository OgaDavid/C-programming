#include <stdio.h>
// declare the functions at the top to help compiler know about these functions.

int get_size(void);
void print_grid(int n);

int main(void)
{
    // get size
    int n = get_size();

    // print grid
    print_grid(n);
}

// when using functions: 
// - you'd have to first declare the return type.
// - if it is taking parameters, you'd have to speify the type and name of the parameter.
// - if the function doesn't need to have a return value, you could state that by using void.
//   same goes for the parameters.


// function to ge size =>

int get_size(void)
{
    int n;
    do
    {
        printf("Size: ");
        scanf("%d", &n);
    } while (n < 1);

    return n;
    
}

// function to print grid

void print_grid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}