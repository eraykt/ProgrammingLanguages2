#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");
    int i;
    int *ptr = (int *)malloc(5 * sizeof(int));
    for (i = 0; i < 5; i++)
        *(ptr + i) = i;

    // ptr = [0,1,2,3,4]

    printf("%d %d\n", *ptr++, ptr);   // 0 -> ptr adresi 1 arttı [1. indexi tutuyor]
    printf("%d %d\n", (*ptr)++, ptr); // 1 -> 1 değeri 2 oldu [1. index 2 oldu]
    printf("%d %d\n", *ptr, ptr);     // 2 [1. index]
    printf("%d %d\n", *++ptr, ptr);   // 2 adresi 1 arttır [2. indexi gösterdi]
    printf("%d %d\n", ++*ptr, ptr);   // 3 değeri 1 arttır [2. indexi 1 arttırdı]
}