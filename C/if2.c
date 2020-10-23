#include <stdio.h>
#include <stdlib.h>

int main() {
	int istat[10]={2,1,0,0,2,1,1,2,1,0};
	int i;
	int puan=0;
	for(i=0;i<=9;i++){
		if(istat[i]==2){
			puan=puan+3;
		}
		if(istat[i]==0){
			puan=puan+1;
		}
	}
	
	if(puan>=12){
	printf("%d puan ile kume dusmediniz.",puan);
	}
	else{
		printf("%d puan alarak kume dustuduz.",puan);
	}
	
	return 0;
}
