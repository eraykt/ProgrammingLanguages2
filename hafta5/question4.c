// verilen bir dizi içerisindeeki yer alan sayıları pointer kullanarak tersten yazdıran program
#include <stdio.h>

void main()
{
    system("cls");

    int dizi[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    for (int i = sizeof(dizi) / sizeof(int); i > 0; i--)
    {
        printf("%d ", *(dizi + i - 1));
    }
}