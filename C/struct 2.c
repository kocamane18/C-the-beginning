#include <stdio.h>
#include <stdlib.h>
struct kayit{
	char ad[20];
	int no,sinif;
	float ort;
};
struct kayit ogr;

int main() {
	printf("Ad: "); gets(ogr.ad);
	printf("No: "); scanf("%d",&ogr.no);
	printf("Sinif: "); scanf("%d",&ogr.sinif);
	printf("Ortalama: "); scanf("%f",&ogr.ort);
	
	printf("\n");
	puts(ogr.ad);
	printf("%d\n%d\n%.2f",ogr.no,ogr.sinif,ogr.ort);
	
	return 0;
}
