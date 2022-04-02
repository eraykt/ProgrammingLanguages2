#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");

    int ogrno, i;

    printf("ogrenci numaranizi giriniz..:");
    scanf("%d", &ogrno);

    int *binarydizi = (int *)calloc(1, sizeof(int));

    int ogrno2 = ogrno;
    int k = 0;

    while (ogrno2 != 0)
    {
        *(binarydizi + k) = ogrno2 % 2; // 0 0 0 0 0 0 1
        k++;
        binarydizi = (int *)realloc(binarydizi, k + 1);
        ogrno2 /= 2;
    }
    int temp;

    for (i = 0; i < k / 2; i++)
    {
        temp = *(binarydizi + i);
        *(binarydizi + i) = *(binarydizi + k - i - 1);
        *(binarydizi + k - i - 1) = temp;
    }

    k == 0 ? k++ : 0;

    for (i = 0; i < k; i++)
    {
        printf("%d", *(binarydizi + i));
    }
}
