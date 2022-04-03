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

    char studentNo[] = "2110205019";

    int no = 0;

    for (int i = 0; i < strlen(studentNo); i++) // burdaki işlem char olan sayıları int formatına çeviriyor.
        no += *(studentNo + i) - '0';

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