#include <stdio.h>

int main(){

	int n, i;
	printf("Enter number: ");
	scanf("%d", &n);

	for(i=0; n!=0; i++){
		n = n/10;
	}
	
	
	printf(" The length of the number is %d", i);
	
	
}

