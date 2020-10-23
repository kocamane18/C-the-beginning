#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int s1,s2,s3,p,ort;
	
	printf("1. sinav notu: ");
	scanf("%d",&s1);
	printf("2. sinav notu: ");
	scanf("%d",&s2);
	printf("3. sinav notu: ");
	scanf("%d",&s3);
	printf("Proje notu: ");
	scanf("%d",&p);
	printf("\n\n");
	
	ort=(s1+s2+s3+p)/4;
	
	if(ort<50){
		printf("Harf notunuz FF");
	}
	if(ort>=50 && ort<60){
		printf("Harf notunuz DD");
	}
	if(ort>=60 && ort<70){
		printf("Harf notunuz CC");
	}
	if(ort>=70 && ort<85){
		printf("Harf notunuz BB");
	}
	else{
		printf("*****Harf notunuz AA*****\n\n");
	char isim[15];
	printf("Isminiz: ");
		scanf("%s",isim);
		printf("     Kralsin %s",isim);
	}
	
	
	
	
	
	
	
	return 0;
}
