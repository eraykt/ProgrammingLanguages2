#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");

    char *string = (char *)calloc(1, sizeof(char));
    char c;
    int size = 0;

    printf("string ifadesi giriniz..:");
    while ((c = getchar()) != '\n') // enter tuşuna basılana kadar
    {
        *(string + size) = c;
        size++;
        string = (char *)realloc(string, size + 1);
    }
    *(string + size) = '\0';
}