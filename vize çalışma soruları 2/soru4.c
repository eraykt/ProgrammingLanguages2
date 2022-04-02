#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");

    char *string = (char *)calloc(1, sizeof(char));
    char c;
    int size = 0;

    printf("string ifadesi giriniz..:");
    while ((c = getchar()) != '\n')
    {
        *(string + size) = c;
        size++;
        string = (char *)realloc(string, size + 1);
    }
    *(string + size) = '\0';

    int n;
    for (int i = 65; i < 123; i++)
    {
        n = 0;

        for (int j = 0; j < size; j++)
            if (*(string + j) == i)
                n++;

        if (n == 0)
            continue;

        else
            printf("%c harfinden %d adet var.\n", i, n);
    }
}