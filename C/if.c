#include <stdio.h>
#include <stdlib.h>
int main() {
	int sayi;
	printf("*****Sayinin tam bolenlerini bulma makinesi*****\n\nTam bolenlerini bulmak istediginiz sayi: ");
	scanf("%d",&sayi);
	
	int i;
	for(i=sayi;i>=1;i--){
		if(sayi%i==0){
			printf("%d\n",i);
		}
	}
	// -------> next
	
	return 0;
}
