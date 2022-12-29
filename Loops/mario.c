#include <stdio.h>

int main(void)
{
    const int n;
    printf("Size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}