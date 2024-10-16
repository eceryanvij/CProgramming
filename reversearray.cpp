#include <stdio.h>

int main(){
	
	int i, j, n;
	printf("Enter n val: ");
	scanf("%d", &n);
	
	int a[n];
	for(i = 0; i<n;i++){
		printf("Enter val(%d) of array: ", i+1);
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i<n/2; i++){
		j = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = j;
	}
	
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
	
	
}
