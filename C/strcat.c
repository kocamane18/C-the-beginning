#include <stdio.h>
#include <stdlib.h>

int main() {
	char kitapad[30],yazar[30],kitapyazar[60];
	printf("Kitap Adi ve Yazari arada bosluk birakarak giriniz: ");
	scanf("%s%s",kitapad,yazar);
	
/*	strcat(kitapyazar,kitapad);
	strcat(kitapyazar," ");
	strcat(kitapyazar,"<---> ");
	strcat(kitapyazar, yazar);
	
	printf("\n\n");
	printf("%s",kitapyazar);  */
	
	strcat(kitapyazar,kitapad);
	strcat(kitapyazar," ");
	strcat(kitapyazar,"<---> ");
	strcat(kitapyazar,yazar);
	printf("%s",kitapyazar);
	 
	 // anlamadýðým bir nedenden dolayý aradaki boþluðu deðiþtirince yazdýrýrken baþa anlamsýz iþaretler yazýyor.
	
	
	
	return 0;
}
