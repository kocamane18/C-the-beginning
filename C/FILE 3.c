#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *metin;
	metin=fopen("C:\\Users\\CASPER\\Desktop\\metin.txt","w");
	char veri1[15]=("Elektronik ve ");
	char veri2[15]=("Haberlesme ");
	char veri3[15]=("Muhendisligi");
	char veri4[15]=("\n2. sinif");
	
	fputs(veri1,metin);
	fputs(veri2,metin);
	fputs(veri3,metin);
	
	return 0;
}
