#include <stdio.h>

int main(){
	
	int i, j, n, count = 1;
	
	printf("Enter n value: ");
	scanf("%d", &n);
	
	for(i =0; i<n; i++){
		for(j = 0; j<2*n - 1; j++){
			if(j >= n-1-i && j <= n+i-1){
				if (count%2 != 0){
					printf("*");
					count++;
				}else{
					printf(" ");
					count++;
				}
				
			}else{
				printf(" ");
			}
			
		}
		count =1;
		printf("\n");
	}	

}
