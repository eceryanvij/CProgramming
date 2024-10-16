#include <stdio.h>

int main(){
	
	int i, j, k, t, n;
	float avg = 0;
	printf("Enter n val: ");
	scanf("%d", &n);
	printf("Enter k val: ");
	scanf("%d", &k);
	int a[n];
	for(i = 0; i<n;i++){
		printf("Enter val(%d) of array: ", i+1);
		scanf("%d", &a[i]);
	}
	
	 
	//BUBBLESORT
	for(i = 0; i< n-1; i++ ){
		for(j = 0; j < n-1-i;j++){
			if (a[j+1] < a[j]){
				t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
			}
		}
		
	}
	
	printf("kth smallest : %d, kth largest : %d", a[k-1], a[n-k] );
	return 0;
	
	
}
