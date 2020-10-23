#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int sec,s1,pi;
	pi=3.14;

	printf("1-Cemberde alan ve cevre hesabi(pi=3 kabul edilerek)\n2-x'e bagli 5x2+7x+9 denkleminin sonucu\n\n");
	printf("Islemlerden birini seciniz: "); scanf("%d",&sec);printf("\n\n");
	
	switch(sec){
		case 1: printf("Yaricap uzunlugunu giriniz: ");scanf("%d",&s1);
		printf("Cemberin alani: %d\nCemberin cevre uzunlugu: %d",(pi*s1*s1),(2*pi*s1));break;
		case 2: printf("x degerini giriniz: ");scanf("%d",&s1);
		printf("Sonuc: %d",(5*s1*s1+7*s1+9));break;
		default: printf("Gozlugunuzu takip tekrar deneyiniz.");
	}
	
	
	
	
	return 0;
}
