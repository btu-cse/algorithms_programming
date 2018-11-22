#include <stdio.h>

int main()
{
    char name[30];
    printf("İsim: ");
    gets(name);
    printf("Girilen İsim: ");
    puts(name);
    return 0;
}