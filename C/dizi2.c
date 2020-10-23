#include <stdio.h>
#include <stdlib.h>

int main() {
	int dizzo[2][3]={10,20,30,40,50,60};
/*  printf("a11: %d\n",dizzo[0][0]);
	printf("a12: %d\n",dizzo[0][1]);
	printf("a13: %d\n",dizzo[0][2]);
	printf("a21: %d\n",dizzo[1][0]);
	printf("a22: %d\n",dizzo[1][1]);
	printf("a23: %d\n",dizzo[1][2]);  */
	
	int i,j;
		for(i=0;i<=1;i++){
			for(j=0;j<=2;j++){
				printf("a%d%d: %d\n",i+1,j+1,dizzo[i][j]);
			}
		}
	
	
	
	
	
	return 0;
}
