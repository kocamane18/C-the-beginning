#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Katar uunlugu: %d",strlen("merhaba dunya"));  // tuttuğu birim yeri sayıyor.
	
	char bilgi[50];
	printf("\nKelime dizini girin: ");
	gets(bilgi);
	printf("Katar uzunlugu: %d",strlen(bilgi));
	
	
	
	return 0;
}
