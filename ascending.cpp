#include <stdio.h>

int main(){
	
	int i, j, k, n;
	printf("Enter n val: ");
	scanf("%d", &n);
	
	int a[n];
	for(i = 0; i<n;i++){
		printf("Enter val(%d) of array: ", i+1);
		scanf("%d", &a[i]);
	}
	
	 
	//BUBBLESORT
	for(i = 0; i< n-1; i++ ){
		for(j = 0; j < n-1-i;j++){
			if (a[j+1] < a[j]){
				k = a[j+1];
				a[j+1] = a[j];
				a[j] = k;
			}
		}
		
	}
	
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
	
	
}
