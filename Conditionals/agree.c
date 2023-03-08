#include <stdio.h>

int main(void)
{
    char c;
    printf("Do you agree with me? ");
    scanf("%c", &c);

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
    else{
        printf("Please input either of y, Y or n, N");
    }
}
