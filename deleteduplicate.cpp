#include <stdio.h>
int main(){
	
	int i, j, n, k, flag = 0, count = 1;
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
	
	for(i = 0; i<n-1; i++){
		if (a[i] == a[i+1]){
			;
		}else{
			count+=1;
		}
	}
	
	int b[count];
	
	for(i = 0; i<count; i++){
		b[i] = 0;	
	}
	
	for(i = 0; i<n; i++){
		for(j = 0; j<count; j++){
			if ((b[j] != a[i])&& (b[j] == 0)){
				b[j] = a[i];
				break;
			}else if (b[j] == a[i]){
				break;
			}
		}
	}
	
	for(i=0; i<count; i++){
		printf("%d ", b[i]);
	}
	
	return 0;
}
