#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char sehir1[15],sehir2[15],sehir3[15];
	printf("1. sehri girin: ");
	scanf("%s",&sehir1);
	printf("2. sehri girin: ");
	scanf("%s",&sehir2);
	printf("3. sehri girin: ");
	scanf("%s",&sehir3); printf("\n");

	printf("Girmis oldugunuz sehirler sirasiyla:\n 1- %s\n 2- %s\n 3- %s",sehir1,sehir2,sehir3);
	
	
	
	return 0;
}
