#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,j,k,l,m,n,o,t,z;
	
	for(i=1;i<=5;i++){
		
		for(j=1;j<=i;j++){
			printf("*");
		}
		for(n=9;n>=2*i;n--){printf(" ");
		}
	    for(o=1;o<=i;o++){
	    	printf("*");
		}   
	
		printf("\n");			
	}
// sag kisim		
	for(k=1;k<=5;k++){
		for(j=5;j>=k;j--){
			printf("*");
		}
		for(t=2;t<2*k;t++){printf(" ");
		}
		for(z=5;z>=k;z--){
			printf("*");
		}
		
		 printf("\n");
	}
		
		
	
	
	
	
	
	return 0;
}
