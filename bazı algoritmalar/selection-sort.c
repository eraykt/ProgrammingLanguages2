#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *dizi, int n)
{
    int i, min, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (dizi[min] > dizi[j])
                min = j;

        temp = dizi[min];
        dizi[min] = dizi[i];
        dizi[i] = temp;
    }
}

void main()
{
    system("cls");

    int list[] = {9, 8, 7, 2, 3, 5, 1, 4, 6};

    selectionSort(list, 9);

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", list[i]);
    }
}