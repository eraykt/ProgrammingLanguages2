// dinamik bellek ayırma yöntemi kullanarak en büyük sayıyı bulan program.
// dizinin boyutunu kullanıcıya sorunuz ve dizinin elemanlarını kullanıcıdan alınız.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");
    int size;
    int max;
    int i;
    printf("dizinin kac elemanli olmasini istiyorsunuz..:");
    scanf("%d", &size);

    int *array = (int *)calloc(size, sizeof(int));

    printf("dizinin elemanlarini tek tek giriniz..:");

    for (i = 0; i < size; i++)
        scanf("%d", (array + i));

    max = array[0];

    for (i = 0; i < size; i++)
        if (max < *(array + i))
            max = *(array + i);

    printf("--dizinin elemanlari--\n");
    for (i = 0; i < size; i++)
        printf("%d ", *(array + i));

    printf("\nen buyuk eleman..:%d", max);
}