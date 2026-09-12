#include<stdio.h>

int main()
{
	float cm, metre, km;
	
	printf("Uzunluğu santimetre cinsinden giriniz: ");
	scanf("%f", &cm);
	
	metre = cm/100.00;
	km = cm/100000.0;
	
	printf("Metre cinsinden uzunluk = %.3f m \n", metre);
	printf("Kilometre cinsinden uzunluk = %.3f km \n", km);
	
	return 0;
}
