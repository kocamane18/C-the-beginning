#include <stdio.h>
#include <stdlib.h>

struct kitapbilgi{
	char ad[20],yazar[20];
	int fiyat;
	float puan;
};

int main() {
	struct kitapbilgi kb={"SucVeCeza","Dostoyevski",13,8.2};
	printf("Kitabin adi: %s\n",kb.ad);
	printf("Yazar: %s\n",kb.yazar);
	printf("Fiyat: %d\n",kb.fiyat);
	printf("Puan: %.1f",kb.puan);
	
	
	
	return 0;
}
