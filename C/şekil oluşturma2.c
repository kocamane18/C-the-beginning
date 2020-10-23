#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,p,e,taban;
	printf("Eskenar ucgenin taban degeri: "); scanf("%d",&taban);
	
    for(p=1;p<=taban;p++){
    	for(e=taban-1;e>=p;e--){
    		printf(" ");
		}
	
	    for(i=1;i<=p;i++){
		    printf("* ");
	    }printf("\n");
    }
	return 0;
}
