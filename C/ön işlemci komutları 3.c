#include <stdio.h>
#include <stdlib.h>
#define puan 1.25
#define puan2 0.75

int main() {
	int net,net2;
	printf("Matematik netiniz: "); scanf("%d",&net);
	printf("Sosyal netiniz: "); scanf("%d",&net2);
	double toplam;
	toplam=net*puan+net2*puan2;
	printf("Puaniniz: %.2f",toplam);
	
	
	
	
	return 0;
}
