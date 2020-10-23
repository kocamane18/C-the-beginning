#include <stdio.h>
#include <stdlib.h>

int main() {
/*	
	int sayi=20;
	int *s=&sayi;
	
	printf("Sayi: %d\n",sayi);
	printf("Adres: %x",s);
	printf("\n-----------------\n");
	
	char kelime='b';
	char *k=&kelime;
	
	printf("Kelime: %c\n",kelime);
	printf("Adres: %x",k);
	printf("\n\n");
	*/
	
	char harf='k';
	char *pt=&harf;
	
	printf("Adres: %x\n",pt); 
	pt=pt+2;
	printf("Adres2: %x\n",pt); 
	pt=pt+3;
	printf("Adres3: %x",pt); //heksadesimal: 16 lýk sayý tabaný; 0,1,2,....,8,9,a,b,c,d,e,f
	
	
	
	return 0;
}
