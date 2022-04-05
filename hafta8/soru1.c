// bubble sort ile kullanıcının istediği kadar girdiği kelimeleri alfabetik olarak sıralayan program.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    system("cls");

    char c;       // diziye kelime almak için geçici olarak kullanılan harf
    int size = 0; // aldığımız kelimenin boyutunu geçici olarak tutan değişken

    printf("kac tane kelime girmek istiyorsunuz..:");
    int kelimeSayisi;
    scanf("%d", &kelimeSayisi);

    char **list = (char **)calloc(kelimeSayisi, sizeof(char *)); // string listesi -> kelimesayisi 3 ise list[3][] gibi bir şey ayırmış olduk
    char *temp = (char *)malloc(100 * sizeof(char));             // geçici string

    getchar(); // bu olmazsa ilk kelimeyi almıyor çünkü kelime sayısını alırken bastığımız enter ile for daki getchar çakışıyor

    for (int i = 0; i < kelimeSayisi; i++) // kelime sayısı kadar dön
    {
        printf("%d. kelimeyi giriniz..:", i + 1);

        *(list + i) = (char *)malloc(sizeof(char)); // yukarıda list[3][] diye ayırmıştık şimdi 2. boyut için yer ayırıyoruz

        while ((c = getchar()) != '\n') // dinamik kelime alma algoritması burada başlıyor
        {
            *(*(list + i) + size) = c;
            size++;
            *(list + i) = (char *)realloc(*(list + i), size + 1);
        }
        *(*(list + i) + size) = '\0'; // burada bitiyor --- *(list+i) bizim ilk köşeli parantezimiz, *(*(list+i) + size) ise list[a][b] oluyor

        size = 0; // yeni kelimeye geçtiğimiz için uzunluğu sıfırlıyoruz
    }

    for (int i = 0; i < kelimeSayisi - 1; i++) // bubble sort
    {
        for (int j = 0; j < kelimeSayisi - i - 1; j++)
        {
            if (strcmp(*(list + j), *(list + j + 1)) > 0)
            {
                strcpy(temp, *(list + j + 1));
                strcpy(*(list + j + 1), *(list + j));
                strcpy(*(list + j), temp);
            }
        }
    }

    free(temp); // geçici stringimizi hafızaya teslim ediyoruz

    for (int i = 0; i < kelimeSayisi; i++) // sıralanmış halini yazdıralım.
    {
        printf("%s ", *(list + i));
    }
}