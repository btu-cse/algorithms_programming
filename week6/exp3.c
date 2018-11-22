#include<stdio.h>
#include<string.h>

int main()
{

    char hello[5] = "hello";
    char world[5] = "world";

    char concat[10] = strcat(hello, world);

    int str_length; 
    str_length = strlen(concat);
    printf("STR LENGTH: %d",str_length);

    int ascii_diff; 
    ascii_diff = strcmp(hello, world);
    printf("ASCII DIFF: %d\n",ascii_diff);

    char concat_copy[10];
    strcpy(concat_copy, concat);
    printf("STR COPY: %s\n", concat_copy);

    char concat_rev[10];
    ("STR REVERSE: %s", strrev(concat));
    
    return 0;
}

