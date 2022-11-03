#include<stdio.h>
#include<stdlib.h>

int main() {

	char sehir[15];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("Sehir Adi Giriniz: ");
		scanf_s("%s", sehir);
		printf("Girdiniz Sehirin Adi: %s", sehir);
		printf("\n");
	}

	return 0;
}