// klavyeden girilen SADECE BÜYÜK HARFLERİ SAYAN program.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");
    char str[100];
    int len = 0;
    printf("string ifadesi giriniz..:");
    gets(str);

    while (str[len] != '\0')
        len++;

    for (int i = 65; i < 91; i++)
    {
        int n = 0;
        for (int j = 0; j < len; j++)
        {
            if (*(str + j) == i) // str[j]
                n++;
        }
        if (n == 0)
            continue;
        else
            printf("%c harfinden %d adet var.\n", i, n);
    }
}
