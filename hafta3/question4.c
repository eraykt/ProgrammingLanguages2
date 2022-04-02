#include <stdio.h>

int palindrome(char a[], int uz)
{
    static int i = 0;
    if (uz == -1)
        return 1;

    else if (a[i] != a[uz])
        return 0;

    i++;
    return palindrome(a, uz - 1);
}

void main()
{
    system("cls");
    char str[100];

    int len = 0;
    printf("string ifadesi giriniz..:");
    gets(str);

    while (str[len] != '\0')
        len++;

    if (palindrome(str, len - 1) == 1)
        printf("bu ifade palindrome.");

    else
        printf("bu ifade palindrome degil.");
}