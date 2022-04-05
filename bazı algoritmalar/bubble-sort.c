#include <stdio.h>

void bubblesort(int *dizi, int len)
{
    int temp;

    for (int i = 0; i < len - 1; i++)
        for (int j = 0; j < len - i - 1; j++)
            if (dizi[j] > dizi[j + 1])
            {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
}

void main()
{
    system("cls");

    int list[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    int list_size = sizeof(list) / sizeof(int);

    bubblesort(list, list_size);

    for (int i = 0; i < list_size; i++)
    {
        printf("%d ", list[i]);
    }
}