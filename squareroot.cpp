//Find squareroot for a number.
#include <stdio.h>
#include <math.h>

int main() {
	float num;
	printf("Enter your number:");
	scanf("%f", &num);
	printf("The squareroot is %.2f", (float)sqrt(num));
	return 0;
	
}
