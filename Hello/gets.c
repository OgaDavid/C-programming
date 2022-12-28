#include <stdio.h>

int main(void)
{
    char first_name[10];
    printf("Hey there! What's your name? ");
    gets(first_name);
    printf("Alright, %s!", first_name);
}