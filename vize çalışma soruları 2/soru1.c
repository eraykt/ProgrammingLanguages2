#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");

    char *name = (char *)malloc(4 * sizeof(char));

    printf("isminizi giriniz..:");
    gets(name); // Eray

    name = (char *)realloc(name, 14);

    printf("soyadinizi giriniz..:");

    *(name + 4) = ' ';

    char c;
    int k = 1;

    while ((c = getchar()) != '\n') // Skywalker
    {
        *(name + 4 + k) = c;
        k++;
    }

    *(name + 4 + k) = '\0';

    printf("%s", name); // Eray Skywalker
}