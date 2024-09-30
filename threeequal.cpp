#include <stdio.h>

int main(){
	int a, b, c;
	printf("Enter three numbers seperated by space: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a==b && b==c){
		printf("EQUAL");
	}
	else{
		printf("NOT EQUAL");
	}
	return 0;
}

