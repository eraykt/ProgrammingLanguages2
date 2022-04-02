// kullanıcıdan dizinin boyutunu alarak pointer bir dizi oluşturunuz. dizinin elemanlarını da kullanıcıdan alınız.
// sonra kullanıcıdan eklemek istediği boyutu ve yeni elemanları alınız. dizinin en son halini ekrana bas.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");
    int size, i;

    printf("dizinin boyutunu giriniz..:");
    scanf("%d", &size);

    int *dizi = (int *)malloc(size * sizeof(int));

    printf("elemanlari giriniz..:");

    for (i = 0; i < size; i++)
    {
        scanf("%d", (dizi + i));
    }

    printf("dizinin kac eleman daha eklemek istiyorsunuz..:");
    int ekstra;
    scanf("%d", &ekstra);

    size += ekstra;
    dizi = (int *)realloc(dizi, size);

    printf("eklemek istediginiz elemanlari giriniz..:");
    for (i = 0; i < ekstra; i++)
        scanf("%d", (dizi + size - ekstra + i));

    printf("--dizinin son hali--\n");

    for (i = 0; i < size; i++)
        printf("%d ", *(dizi + i));
}