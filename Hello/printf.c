#include <stdio.h>

int main(void)
{
    char first_name[50];
    int age[50];
    printf("What is your first name? ");
    scanf("%s", first_name);
    printf("How old are you? ");
    scanf("%s", age);
    printf("hi there! I'm %s!. I am %s years old.", first_name, age);
}