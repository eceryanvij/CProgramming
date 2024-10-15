//To find the greatest of three numbers.

#include <stdio.h>

int main(){
	int a, b, c;
	printf("Enter three numbers seperated by space: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a>b && a>c){
		printf("%d is the greatest", a);
	}
	else if (b>c && b>a)
	{
		printf("%d is the greatest", b);
	}
	else
	{
		printf("%d is the greatest", c);
	}
	return 0;
}
