#include <stdio.h>
#include <stdlib.h>
void listele(){
	printf("Hakan Bey\n");
	printf("Gezmezler Alm.\n");
	printf("Gies Yapi");
}

int toplam(int s1,int s2){
	int s3;
	s3=s1+s2;
	return s3;
}


int main() {
	listele();
	printf("\n\n");
	
	int t;
	t=toplam(5,4);
	printf("%d\n",t);
	
	int a,b;
	printf("1. sayi: ");
	scanf("%d",&a);
	printf("2. sayi: ");
	scanf("%d",&b);
	t=toplam(a,b);
	printf("Toplam: %d",t);
	
	
	
	
	
	return 0;
}
