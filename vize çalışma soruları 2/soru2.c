#include <stdio.h>
#include <stdlib.h>

int check(char *str1, char *str2, int len);

void main()
{
    system("cls");

    char *string1 = (char *)calloc(1, sizeof(char));
    char *string2 = (char *)calloc(1, sizeof(char));

    int uzunluk1 = 0;
    int uzunluk2 = 0;

    char c;

    printf("1. kelimeyi giriniz..:");
    while ((c = getchar()) != '\n')
    {
        *(string1 + uzunluk1) = c;
        uzunluk1++;
        string1 = (char *)realloc(string1, uzunluk1 + 1);
    }
    *(string1 + uzunluk1) = '\0';

    printf("2. kelimeyi giriniz..:");
    while ((c = getchar()) != '\n')
    {
        *(string2 + uzunluk2) = c;
        uzunluk2++;
        string2 = (char *)realloc(string2, uzunluk2 + 1);
    }
    *(string2 + uzunluk2) = '\0';

    if (uzunluk1 > uzunluk2)
        printf("\nkelimeler esit degil ve \"%s\" kelimesi daha uzun. (%d harf)", string1, uzunluk1);

    else if (uzunluk2 > uzunluk1)
        printf("\nkelimeler esit degil ve \"%s\" kelimesi daha uzun. (%d harf)", string2, uzunluk2);

    else
    {
        switch (check(string1, string2, uzunluk1 - 1))
        {
        case 1:
            printf("\niki kelime de birbirine esit");
            break;

        case 0:
            printf("\nkelimelerin uzunluklari ayni fakat kelimeler birbirlerine esit degil");
            break;
        }
    }
}

int check(char *str1, char *str2, int len)
{
    if (len < 0)
        return 1;

    else if (*(str1 + len) == *(str2 + len))
        return check(str1, str2, len - 1);

    else
        return 0;
}
