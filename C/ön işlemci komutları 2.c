#include <stdio.h>
#include <stdlib.h>
int kup(int taban){
	int sonuc;
	sonuc=taban*taban*taban;
	return sonuc;
}

void dortgen(int en,int boy){
	int i,j,k,l;
	for(i=0;i<boy;i++){
		if(i==0 || i==boy-1){   
			for(j=0;j<en;j++){
				printf("*");
			}
		}
		else{
			for(j=0;j<en;j++){
				if(j==0 || j==en-1){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			
		} printf("\n");
	}
}


int main() {
	int sayi;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	printf("Sayinin kubu: %d\n\n",kup(sayi));
	
	int en,boy;
	printf("En: "); scanf("%d",&en);
	printf("Boy: "); scanf("%d",&boy);
	dortgen(en,boy);
	
	printf("\n\n");
	int s1,s2;
	printf("Iki sayi girin: ");
	scanf("%d%d",&s1,&s2);
	printf("%d %d",s2,s1);
	
	
	
	return 0;
}
