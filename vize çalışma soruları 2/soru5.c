#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");

    char *string = (char *)calloc(1, sizeof(char));
    char c;
    int i;
    int size = 0;

    printf("string ifadesi giriniz..:");
    while ((c = getchar()) != '\n')
    {
        *(string + size) = c;
        size++;
        string = (char *)realloc(string, size + 1);
    }
    *(string + size) = '\0';

    int bosluksayisi = 0;

    for (i = 0; i < size; i++)
        if (*(string + i) == ' ')
            bosluksayisi++;

    printf("\"%s\" cumlesinde %d adet kelime var.", string, bosluksayisi + 1);
}