#include<stdio.h>
#include<math.h> // sqrt() fonksiyonunu kullanabilmek için

int main()
{
	double sayi,karekok;
	
	printf("karekökü hesaplanacak sayýyý giriniz: ");
	scanf("%lf", &sayi);
	
	karekok = sqrt(sayi); //sayinin karekökünü hesaplýyoruz.
	
	printf("%.2lf sayýsýnýn karekökü %.2lf", sayi, karekok);
	
	return 0;
}
