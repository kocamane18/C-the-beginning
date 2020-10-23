#include <stdio.h>
#include <stdlib.h>

int main() {
// sýfýr girene kadar girilen sayýlarý toplama
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
