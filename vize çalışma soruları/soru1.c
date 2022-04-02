#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");

    char *str = (char *)malloc(4 * sizeof(1));

    char gecici[] = "Eray";

    int isimUzunluk = 0;

    while (gecici[isimUzunluk] != '\0')
    {
        *(str + isimUzunluk) = gecici[isimUzunluk];
        isimUzunluk++;
    }

    int no = 2 + 1 + 1 + 0 + 2 + 0 + 5 + 0 + 1 + 9;

    str = (char *)realloc(str, no);

    int k = 0;

    for (int i = isimUzunluk; i < no; i++)
    {
        *(str + i) = *(str + k);

        k++;

        if (k == isimUzunluk)
        {
            k = 0;

            if (no - (i + 1) <= isimUzunluk)
            {
                *(str + i + 1) = '\0';
                break;
            }
        }
    }

    printf("%s ", str);
}