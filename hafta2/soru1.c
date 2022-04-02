#include <stdio.h>

int obeb(int x, int y)
{
    if (x > y)
    {
        if (x % y == 0)
        {
            if (y == 1)
            {
                return x;
            }

            return y;
        }

        else
            return obeb(x % y, x / y);
    }
}

void main()
{
    system("cls");
    printf("obeb: %d", obeb(100, 25));
}