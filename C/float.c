#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float s1,s2,s3,ort;
	
	printf("1. sinav notu: ");
	scanf("%f",&s1);
	printf("2. sinav notu: ");
	scanf("%f",&s2);
	printf("3. sinav notu: ");
	scanf("%f",&s3);

	ort=(s1+s2+s3)/3;
	
	printf("Ortalamaniz: %f",ort);
	
	
	
	
	
	return 0;
}
