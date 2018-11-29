#include <stdio.h>
#include <stdlib.h>

char charAt(char string[], int index);

int main()
{
    char btu[24] = "BursaTechnicalUniversity";

    charAt(btu, 0);

    return 0;
}

char charAt(char string[], int index)
{
    printf("Char at %d: %c", index, string[index]);
    return string[index];
}
