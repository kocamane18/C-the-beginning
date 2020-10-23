#include <stdio.h>
#include <stdlib.h>

int main() {
	char kitap[40];
	printf("Kitap ismi: "); scanf("%s",&kitap);
	printf("%s",kitap); printf("\n");
	printf("%20s",kitap); printf("\n");
	printf("%20.5s",kitap); printf("\n");
	printf("%-20s.",kitap);
	
	
	
	
	return 0;
}
