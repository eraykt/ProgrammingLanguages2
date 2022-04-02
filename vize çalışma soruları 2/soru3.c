#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");

    char *string = (char *)calloc(1, sizeof(char));
    char c;
    int i;
    int size = 0;
    int kelimevarmi = 0;

    printf("bir cumle giriniz..:");
    while ((c = getchar()) != '\n')
    {
        *(string + size) = c;
        size++;
        string = (char *)realloc(string, size + 1);
    }
    *(string + size) = '\0';

    char *kelime = (char *)calloc(1, sizeof(char));
    int kelimeUz = 0;

    printf("aramak istediginiz kelimeyi giriniz..:");
    while ((c = getchar()) != '\n')
    {
        *(kelime + kelimeUz) = c;
        kelimeUz++;
        kelime = (char *)realloc(kelime, kelimeUz + 1);
    }
    *(kelime + kelimeUz) = '\0';

    int *bosluklarNerede = (int *)malloc(2 * sizeof(int));
    bosluklarNerede[0] = 0;
    int b = 1;

    for (i = 0; i < size; i++)
    {
        if (*(string + i) == ' ')
        {
            *(bosluklarNerede + b) = i;
            b++;
            bosluklarNerede = (int *)realloc(bosluklarNerede, b + 1);
        }
    }

    int boslukbaslangici = 0;
    i = *(bosluklarNerede + boslukbaslangici);
    int k = 0;

    while (i < size)
    {
        if (*(string + i) == *(kelime + k))
        {
            i++;
            k++;

            if (k == kelimeUz)
            {
                printf("stringin %d. indexinde isteginiz kelime basliyor.", i - kelimeUz);
                kelimevarmi = 1;
                break;
            }
        }
        else
        {
            i = *(bosluklarNerede + (++boslukbaslangici)) + 1;
            k = 0;
        }
    }

    if (!kelimevarmi)
    {
        printf("\"%s\" kelimesi \"%s\" cumlesinde gecmiyor.", kelime, string);
    }
}