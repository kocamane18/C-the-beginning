#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *belge;
	belge=fopen("C:\\Users\\CASPER\\Desktop\\yeni.txt","r");
	
/*	char karakter;
	do{
	karakter=getc(belge);    // d�ng� i�inde karakterleri teker teker yazd�rd�k.
	printf("%c",karakter);
    }
    while (karakter!=EOF);  */
    
    char karakter[50];
    fgets(karakter,50,belge);
    puts(belge);    // ilk sat�r� yazd�rd� sadece
    
    fclose(belge);
	
	return 0;
}
