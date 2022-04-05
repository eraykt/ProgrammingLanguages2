#include <stdio.h>
#include <stdlib.h>

void insertionSort(int dizi[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = dizi[i];
        j = i - 1;

        while (j >= 0 && dizi[j] > key)
        {
            dizi[j + 1] = dizi[j];
            j = j - 1;
        }
        dizi[j + 1] = key;
    }
}

void main()
{
    system("cls");
    int list[] = {9, 8, 7, 2, 3, 5, 1, 4, 6};
    insertionSort(list, 9);

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", list[i]);
    }
}
