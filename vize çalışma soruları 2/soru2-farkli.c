// bu kod Batuhan ÇELİKBAŞ tarafından yazılmıştır
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char harfkontrol(char ilk[], char ikinci[])
{
	char *ptr1;
	char *ptr2;
	int i = 0, j = 0, k = 0;
	ptr1 = ilk;
	ptr2 = ikinci;
	j = strlen(ilk);
	for (i = 0; i < j; i++)
	{
		if (ptr1[i] == ptr2[i])
		{
			k++;
		}
		else
		{
			break;
		}
	}
	if (k == j)
	{
		printf("kelimeler aynidir.");
	}
	else
	{
		printf("kelimelerin uzunluklari ayni ama farklidir.");
	}
}
int main()
{
	char kelime1[10];
	char kelime2[10];
	printf("ilk kelimeyi giriniz : ");
	gets(kelime1);
	printf("ikinci kelimeyi giriniz : ");
	gets(kelime2);

	if (strlen(kelime1) == strlen(kelime2))
	{
		harfkontrol(kelime1, kelime2);
	}
	else
	{
		printf("kelimeler ayni degil\n");
		if (strlen(kelime1) > strlen(kelime2))
		{
			printf("girdiginiz ilk kelime ikinciden daha uzun");
		}
		else
		{
			printf("girdiginiz ikinci kelime ilkinden daha uzun");
		}
	}
	return 0;
}
