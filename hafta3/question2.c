#include <stdio.h>

int dizi[100];

float average(int a[], int len)
{
    static int i = 0;
    static int sum = 0;

    if (i == len)
        return sum / i;

    sum += a[i];
    i++;
    return average(a, len);
}

void main()
{
    system("cls");

    int len;
    printf("dizinin eleman sayisini giriniz..:");
    scanf("%d", &len);

    printf("elemanlari tek tek giriniz..:\n");
    for (int i = 0; i < len; i++)
        scanf("%d", &dizi[i]);

    printf("sayilarin ortalamasi..:%0.2f", average(dizi, len));
}