// bir cümlenin kelimelerini sondan başa doğru yazan program.  bu soru ustalık eserim

#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");

    char *str = (char *)malloc(sizeof(char)); // dinamik string dizisi
    char c;                                   // geçici karakter
    int size = 0;                             // dinamik string dizisinin uzunluğu
    int *where = (int *)malloc(sizeof(int));  // boşlukların nerede olduğunu tutan dizi
    int i;
    int k = 0; // kaç tane boşluk olduğunu tutan bilgi

    printf("string gir..:");

    while ((c = getchar()) != '\n') // i love you
    {
        *(str + size) = c;
        size++;
        str = (char *)realloc(str, size + 1);
    }
    *(str + size) = '\0';
    printf("%s\n", str);

    for (i = 0; i < size; i++) // boşlukların nerede ve kaç tane olduğunu dinamik bir şekilde buluyoruz.
    {
        if (*(str + i) == ' ')
        {
            *(where + k) = i;
            where = (int *)realloc(where, k + 1);
            k++;
        }
    }

    // ilk kelime hariç diğer kelimeleri yazdırıyoruz.
    for (int a = 0; a < k; a++)
    {
        for (i = *(where + k - a - 1); i < size - 1; i++)
        {
            if (*(str + i + 1) != ' ')
                printf("%c", *(str + i + 1));

            else if (*(str + i + 1) == ' ')
                break;
        }
        printf(" ");
    }

    // ilk kelimeyi yazdırıyoruz.
    for (i = 0; i < size; i++)
    {
        if (*(str + i) != ' ')
        {
            printf("%c", *(str + i));
        }
        else
            break;
    }
}