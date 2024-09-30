#include <stdio.h>

int main(){
	
	int n, i, factorial;
	factorial = 1;
	printf("Enter number to find factorial of: ");
	scanf("%d", &n);
	
	for(i = n; i >= 1; i--){
		factorial *= i;
		
	}
	
	printf("%d", factorial);
	
}
