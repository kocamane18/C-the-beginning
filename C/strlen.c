#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Katar uunlugu: %d",strlen("merhaba dunya"));  // tuttu�u birim yeri say�yor.
	
	char bilgi[50];
	printf("\nKelime dizini girin: ");
	gets(bilgi);
	printf("Katar uzunlugu: %d",strlen(bilgi));
	
	
	
	return 0;
}
