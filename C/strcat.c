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
	 
	 // anlamad���m bir nedenden dolay� aradaki bo�lu�u de�i�tirince yazd�r�rken ba�a anlams�z i�aretler yaz�yor.
	
	
	
	return 0;
}
