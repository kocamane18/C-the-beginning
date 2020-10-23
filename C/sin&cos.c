#include <stdio.h>
#include <stdlib.h>

int main() {
	double aci,sindeger,cosdeger,pi;
	pi=3.14159265;
	printf("Bir deger giriniz: ");
	scanf("%lf",&aci);
	aci=aci*pi/180;  // radyan cinsinden hesapladýðý için böyle yaptýk.
	sindeger=sin(aci);
	cosdeger=cos(aci);
	printf("Sin%lf=%lf\n",aci,sindeger);
	printf("Cosdeger%lf=%lf",aci,cosdeger);
	
	
	
	return 0;
}
