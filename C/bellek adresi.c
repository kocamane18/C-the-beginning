#include <stdio.h>
#include <stdlib.h>

int main() {
	int sayi=10;
	int sayi2=20;
	double sayi3=12.91;
	char kelime='d';
	
	printf("%d\n%d\n",sayi,sayi2);
	printf("%.2f\n",sayi3);
	printf("%c",kelime);
	
	printf("\n\n Bellek Adresleri \n\n");
	printf("%x\n",&sayi);
	printf("%x\n",&sayi2);
	printf("%x\n",&sayi3);
	printf("%x",&kelime);
	
	// bilgisayarý yeniden baþlattým, bellek adresleri deðiþmemiþ.
	
	
	
	return 0;
}
