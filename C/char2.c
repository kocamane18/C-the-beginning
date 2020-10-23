#include <stdio.h>
#include <stdlib.h>



int main() {
	
	char ad[10],yaz[10],sayfas[3],tarih[4],yayinevi[15],tur[10];
	
printf("Kitabin adini giriniz: ");
	scanf("%s",ad);
	printf("yazarin adini giriniz: ");
	scanf("%s",yaz);
	printf("Sayfa sayisini giriniz: ");
		scanf("%s",sayfas);
	printf("Cikis yilini giriniz: ");
scanf("%s",tarih);
printf("Yayinevini giriniz: ");
scanf("%s",yayinevi);
printf("Kitabin turunu giriniz: ");
scanf("%s",tur);
	
	printf("Kitap adi: %s - Yazar adi: %s\n",ad,yaz);
	printf("Sayfa sayisi: %s\n",sayfas);
	printf("Cikis tarihi: %s\n",tarih);
	printf("Yayinevi: %s\n",yayinevi);
	printf("Kitabin turu: %s",tur);

	
	return 0;
}
