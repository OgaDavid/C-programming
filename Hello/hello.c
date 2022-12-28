#include <stdio.h>

int main(void)
{
    printf("Please enter your name: ");
    char name[50];
    scanf("%s", name);
    printf("Hello %s\n", name);
    return 0;
}