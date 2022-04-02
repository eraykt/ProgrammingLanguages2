#include <stdio.h>

int binary(int x)
{
    static int k = 1;
    static int bin = 0;
    static int temp = 0;

    if (x != 0)
    {
        temp = x % 2;
        bin += temp * k;
        k *= 10;
        return binary(x / 2);
    }
    return bin;
}

void main()
{
    system("cls");
    printf("bir sayi giriniz...");

    int input;
    scanf("%d", &input);
    printf("girdiginiz sayinin binary hali..:%d", binary(input));
}