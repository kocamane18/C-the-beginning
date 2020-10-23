#include <stdio.h>
#include <stdlib.h>

/* IO   input & output
   FILE / f
   get ---> okuma
   put ---> yazdýrma
   fgets ---> toplu okuma
   fputs ---> toplu yazdýrma
   open & close
   write ---> yazma / w
   read ---> okuma / r
   add ---> ekleme /a  
   EOF ---> end of file  */

int main() {
	FILE *dosya;
	dosya=fopen("C:\\Users\\CASPER\\Desktop\\yeni.txt","r");
	// komut("adres","dosya tipi")
		
	putc('a',dosya);  // c--> chracter & s--> string
	putc('\n',dosya);
	fputs("\n",dosya);
	fputs("Enver Kocaman",dosya);
	
	fclose(dosya);
	
	return 0;
}
