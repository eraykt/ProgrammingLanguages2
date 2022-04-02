// bir kelimenin harflerini tersten ekrana basan programı pointer kullanarak yaz.
#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");

    char *str = (char *)malloc(sizeof(char));

    char c;
    int size = 0;

    printf("bir string giriniz..:");

    while ((c = getchar()) != '\n')
    {
        *(str + size) = c;
        str = (char *)realloc(str, size + 1);
        size++;
    }

    printf("--tersten yazilmis hali--\n");

    for (int i = 0; i < size; i++)
    {
        printf("%c", *(str + size - 1 - i));
    }
}