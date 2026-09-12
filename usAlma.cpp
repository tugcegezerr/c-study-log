#include<stdio.h>
#include<math.h> //pow() fonksiyonunu kullanabilmek için

int main()
{
	double taban, kuvvet, sonuc;
	
	printf("taban deðerini giriniz: ");
	scanf("%lf", &taban);
	printf("kuvvet deðerini giriniz: ");
	scanf("%lf", &kuvvet);
	
	sonuc = pow(taban,kuvvet); //taban^kuvvet deðerini hesaplatýyoruz.
	
	printf("%.2lf ^%.2Lf = %.2lf", taban, kuvvet, sonuc);
	
	return 0;
}
