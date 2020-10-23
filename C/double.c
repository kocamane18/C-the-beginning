#include <stdio.h>
#include <stdlib.h>

int main() {
	double alt,ust;
	printf("sayiyi girin: ");
	scanf("%lf",&alt);
	printf("Deneme: %.2lf\n",alt);
	printf("diger sayiyi girin: ");
	scanf("%lf",&ust);
	printf("Girilen sayilar: %lf ve %lf.",alt,ust);
	
	printf("\nSonuc: %lf",log10(alt));
	
	
	return 0;
}
