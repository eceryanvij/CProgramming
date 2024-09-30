#include <stdio.h>

int main(){
	int a, b, c;
	printf("Enter lengths of three sides of a triangle seperated by space: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a+b > c && b + c > a && a + c > b){
	
		if (a == b && a == c){
			printf("This triangle is equilateral");
		}
		else if (a==b && a!=c || a==c && a!=b || c==b && a!=c ){
			printf("This triangle is isoceles");
		}
		else{
			printf("This triangle is scalene");
		}
	}
	else{
		printf("THIS IS NOT A TRIANGLE");
	}
	return 0;
}

