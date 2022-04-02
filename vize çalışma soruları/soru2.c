#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");
    int A[] = {9, 2, 0, 5, 0, 2, 0, 1, 1, 2};

    int *m, **k;
    m = A;

    printf("m: %d\n", m);

    printf("Output 1: %d\n", *(m + 1));

    *(m + 2) += 3;
    m += 4;
    printf("Output 2: %d\n", (m + 1));

    m = &A[1];
    k = &m;
    printf("Output 3: %d\n", *(*(k) + 1));

    printf("Output 4: %d\n", *k);

    m = m - 1;
    printf("Output 5: %d\n", *k);
}