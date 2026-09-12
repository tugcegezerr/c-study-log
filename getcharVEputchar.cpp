#include<stdio.h>

int main()
{
	char ogrenci_notu;
	printf("öðrenci notunu giriniz: ");
	
	ogrenci_notu = getchar(); // getchar() komutu ile notu alýp ogrenci_notu deðiþkeninde saklýyoruz.
	
	putchar(ogrenci_notu);
	
	return 0;
}
