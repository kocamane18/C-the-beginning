#include <stdio.h>
#include <stdlib.h>
int main() {
	 char nereden[30]="Naber mudur";
	 char nereye[30]="";
	 
	 strcpy(nereye,nereden);
	 printf("%s\n",nereye);
	
	char kaynak[30]="Hello World";
	char depo[35]="";
	
	strncpy(depo,kaynak,7);    // tek fark� al�nacak karakter say�s�n� girmemiz.
	printf("%s",depo);
	
	
	
	return 0;
}
