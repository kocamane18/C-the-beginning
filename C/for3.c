#include <stdio.h>
#include <stdlib.h>
// rakamlar� farkl� 3 basamkl� ka� say� vard�r?
int main() {
	int i,j,k,cevap;
	cevap=0;
	
		for(i=1;i<=9;i++){
			for(j=0;j<=9;j++){
				for(k=0;k<=9;k++){
					if(i!=j && i!=k && k!=j){
					 	cevap=cevap+1;	
					printf("%d%d%d  ",i,j,k); } 
				}
			}
			
		}
printf("\n\nrakamlari farkli 3 basamakli %d sayi vardir.",cevap);
// insanl�k i�in belki minicik ama benim i�in b�y�k bir ba�ar� :)

/* as�l cevap: 
int sayac=0; int i,yuzler,onlar,birler;
    for(i=100;i<i=999;i++){
        yuzler=i/100; birler=1%10; onlar=(i/10)%10;
            if(yuzler!=onlar && yuzler!=birler && onlar!=birler){
                sayac++; 
	        }
    }
    printf("%d",sayac); */
    
	return 0;
}
