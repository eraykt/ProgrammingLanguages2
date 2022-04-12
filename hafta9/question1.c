#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char number[10];
    char name[20];
    char surname[20];
    int midtermGrade;
    int finalGrade;
    float ortalama;
};
typedef struct student ogrenci;

void main()
{
    system("cls");
    int ogrsayisi = 3;
    int i, j;

    ogrenci *ogrList = (ogrenci *)malloc(ogrsayisi * (sizeof(ogrenci)));

    for (i = 0; i < ogrsayisi; i++)
    {
        printf("okul no..:");
        gets((ogrList + i)->number);

        printf("isim..:");
        gets((ogrList + i)->name);

        printf("soyisim..:");
        gets((ogrList + i)->surname);

        printf("vize puani..:");
        scanf("%d", &(ogrList + i)->midtermGrade);

        printf("final puani..:");
        scanf("%d", &(ogrList + i)->finalGrade);
        getchar();
    }

    char *temp = (char *)malloc(20);
    int temp_;

    for (i = 0; i < ogrsayisi - 1; i++)
        for (j = 0; j < ogrsayisi - 1 - i; j++)
            if (strcmp((ogrList + j)->name, (ogrList + j + 1)->name) > 0)
            {
                strcpy(temp, (ogrList + j)->name);
                strcpy((ogrList + j)->name, (ogrList + j + 1)->name);
                strcpy((ogrList + j + 1)->name, temp);

                strcpy(temp, (ogrList + j)->surname);
                strcpy((ogrList + j)->surname, (ogrList + j + 1)->surname);
                strcpy((ogrList + j + 1)->surname, temp);

                strcpy(temp, (ogrList + j)->number);
                strcpy((ogrList + j)->number, (ogrList + j + 1)->number);
                strcpy((ogrList + j + 1)->number, temp);

                temp_ = (ogrList + j)->midtermGrade;
                (ogrList + j)->midtermGrade = (ogrList + j + 1)->midtermGrade;
                (ogrList + j + 1)->midtermGrade = temp_;

                temp_ = (ogrList + j)->finalGrade;
                (ogrList + j)->finalGrade = (ogrList + j + 1)->finalGrade;
                (ogrList + j + 1)->finalGrade = temp_;
            }

    for (i = 0; i < ogrsayisi; i++)
        (ogrList + i)->ortalama = ((ogrList + i)->midtermGrade * 0.4) + ((ogrList + i)->finalGrade * 0.6);

    for (i = 0; i < ogrsayisi; i++)
    {
        printf("\nisim..: %s\n", (ogrList + i)->name);
        printf("soyisim..: %s\n", (ogrList + i)->surname);
        printf("no..: %s\n", (ogrList + i)->number);
        printf("ortalama..: %0.1f\n", (ogrList + i)->ortalama);
    }

    printf("\naramak istediginiz ismi giriniz..:");

    gets(temp);
    for (i = 0; i < ogrsayisi; i++)
        if (strcmp(temp, (ogrList + i)->name) == 0)
        {
            printf("\nisim..: %s\n", (ogrList + i)->name);
            printf("soyisim..: %s\n", (ogrList + i)->surname);
            printf("no..: %s\n", (ogrList + i)->number);
            printf("ortalama..: %0.1f\n", (ogrList + i)->ortalama);
        }
}