#include<stdio.h>

int main()
{
	int sayi1, sayi2;
	int toplam, fark, carpim, mod;
	float bolum; //iki sayýnýn ölümü integer olamayabilir.
	
	
	//Kullanýcýdan iki sayý alýyoruz.
	printf("Lütfen iki sayý giriniz: ");
	scanf("%d%d", &sayi1, &sayi2);
	
	
	//Aritmetik iþlemleri gerçekleþtiriyoruz.
	toplam = sayi1+sayi2;
	fark = sayi1-sayi2;
	carpim = sayi1*sayi2;
	bolum = (float)sayi1/sayi2;
	mod = sayi1%sayi2;
	
	
	//Sonuçlarý yazdýrýyoruz.
	printf("Toplam= %d\n", toplam);
	printf("Fark= %d\n", fark);
	printf("Çarpým= %d\n", carpim);
	printf("Bölüm= %f\n", bolum);
	printf("Kalan= %d", mod);
	
	return 0;
}
