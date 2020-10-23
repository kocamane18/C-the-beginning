#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int faktoryel,i;
	faktoryel=1;
	printf("Faktoryelini bulmak istediginiz sayi: ");
	scanf("%d",&i);
	
	
	while(i>=1){
		faktoryel=faktoryel*i;
		i--;
		
	}

		printf("%d",faktoryel);
		
	return 0;
}
