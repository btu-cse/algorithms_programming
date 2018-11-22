#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    printf("Enter a string");
    scanf("%[^\n]", &str);  //scanning the whole string, including the white spaces
    printf("%s", str);

    return 0;
}