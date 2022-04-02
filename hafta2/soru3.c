#include <stdio.h>

int dizi[100];
int buyuk;

int max(int array[], int len)
{
    if (len < 0)
        return buyuk;

    else if (array[len] > buyuk)
        buyuk = array[len];

    return max(array, len - 1);
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

    buyuk = dizi[0];
    printf("max: %d", max(dizi, uz - 1));
}