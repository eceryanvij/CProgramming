#include <stdio.h>

int main(){
	
	int i, k, n;
	printf("Enter n val: ");
	scanf("%d", &n);
	
	if(n%2 != 0){
		printf("N must be even");
		return 0;
	}
	int a[n];
	for(i = 0; i<n;i++){
		printf("Enter val(%d) of array: ", i+1);
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i<n; i+=2){
		k = a[i + 1];
		a[i+1] = a[i];
		a[i] = k;
	}
	
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
	
	
}
