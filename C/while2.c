#include <stdio.h>
#include <stdlib.h>

int main() {
// s�f�r girene kadar girilen say�lar� toplama
	int toplam, sayi;
	toplam=0;
	while(sayi!=0){
		printf("Sayi: ");
		scanf("%d",&sayi);
		toplam=toplam+sayi;
	}
	printf("Toplam: %d",toplam);
	
	
	return 0;
}
