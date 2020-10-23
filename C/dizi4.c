#include <stdio.h>
#include <stdlib.h>

int main() {
	int matr1[2][2]={-2,5,3,1}; int matr2[2][2]={6,1,0,4};
	int m1xm2[2][2]={0,0,0,0};
	int i,j;
    for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			int k;
			for(k=0;k<2;k++){
				m1xm2[i][j]+=matr1[i][k]*matr2[k][j];
					
			}	
	    printf("%d ",m1xm2[i][j]);
	   
		
    	}  
    	printf("\n");
    } 
	
	
	
	
	return 0;
}
