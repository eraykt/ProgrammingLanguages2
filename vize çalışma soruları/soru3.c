#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");
    int number[15];

    int ReadNum, i = 0, k;

    while (1)
    {
        ReadNum = getch();
        if (ReadNum == 13)
            break;

        putchar(ReadNum);
        number[i] = (int)(ReadNum - '0');
        i++;
    }
    fun1(number, 0, i - 1);

    for (int j = 0; j < 10; j++)
    {
        printf("%d ", number[j]);
    }
}

void fun1(int *array, int leftindex, int rightindex)
{
    if (leftindex < rightindex)
    {
        swap(array, leftindex, rightindex);
        fun1(array, leftindex + 1, rightindex - 1);
    }
}

void swap(int *array, int leftindex, int rightindex)
{
    int temp;
    if (array[leftindex] < array[rightindex])
    {
        temp = array[leftindex];
        array[leftindex] = array[rightindex];
        array[rightindex] = temp;
    }
}