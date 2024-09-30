#include <stdio.h>
#include <math.h>

int main(){
	int n, nsec, lastnum, firstnum, i, k, dig;
	
	printf(": ");
	scanf("%d", &n);
	nsec = n;
	k = n;
	
	for(i=0; n!=0; i++){
		n = n/10;
	}
	printf("%d\n", i);
	
	for(k = 1; k<=i; k++){
		
		n = nsec/10;
		printf("%d\n", nsec);
		printf("%d\n", n);
		printf("%d\n", k);
		printf("%d\n", n*pow(10, k));
		dig = k - (n*pow(10, k));
		
		if (k == 1 || k == i){
			printf("%d\n", dig);
		}
		
		
		
	}
	return 0;
	
}
