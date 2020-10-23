#include <stdio.h>
#include <stdlib.h>
//  #define buyuk(s1,s2) (s1>=s2) ? s1 : s2

int uzun(int s1,int s2){
	if(s1>=s2){
		return s1;
	}
	else{
		return s2;
	}
}

int main() {
//	printf("%d",buyuk(3,5));
    
    printf("%d",uzun(12,8));


	
	
	
	
	return 0;
}
