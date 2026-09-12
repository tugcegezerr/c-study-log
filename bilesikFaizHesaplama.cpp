#include<stdio.h>
#include<math.h>

int main()
{
	float ana_para, zaman, faiz_orani, basit_faiz_miktari, bilesik_faiz_miktari;
	
	printf("Ana para miktarýný giriniz: ");
	scanf("%f", &ana_para);
	
	printf("Zamaný giriniz: ");
	scanf("%f", &zaman);
	
	printf("Faiz oranýný giriniz: ");
	scanf("%f", &faiz_orani);
	
	
	basit_faiz_miktari = (ana_para*zaman*faiz_orani)/100;
	
	printf("Basit faiz ile hesaplanan faiz miktarý: %f\n", basit_faiz_miktari);
	
	
	bilesik_faiz_miktari = ana_para*(pow((1+faiz_orani/100), zaman));
	
	printf("Bileþik faiz ile hesaplanan faiz miktarý: %f", bilesik_faiz_miktari);
	
	return 0;
}
