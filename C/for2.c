#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,a,b,d,e;
	a=1;
	printf("Seri kacar kacar artmasini arzu edersiniz?\n - ");
	scanf("%d",&e);
	printf("\n\n");
	
	for(i=0;i<=40;i+=e){
		b=a+i;
		printf("%d\n",b);
	}
	printf("\n");
	d=(1+((b-a)/e))*(b+a)/2;
	printf("Seri toplam: %d",d);
	
	return 0;
}
