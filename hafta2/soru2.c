#include <stdio.h>

int dizi[100];

int toplam(int list[], int len)
{
    if (len < 0)
        return 0;

    else
        return toplam(list, len - 1) + list[len];
}

void main()
{
    int uz;

    system("cls");

    printf("kac elemanli bir dizi istiyorsun..?: ");
    scanf("%d", &uz);

    printf("elemanlari giriniz..:");

    for (int i = 0; i < uz; i++)
        scanf("%d", &dizi[i]);

    printf("toplam: %d", toplam(dizi, uz - 1));
}