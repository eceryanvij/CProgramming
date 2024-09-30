//Multiply two floating point numbers and return float and integer values.

#include <stdio.h>

int main(){
	float float1, float2;
	printf("Enter first floating point number:");
	scanf("%f", &float1);
	printf("Enter second floating point number:");
	scanf("%f", &float2);
	
	printf("FLOAT PRODUCT: %f INT PRODUCT %d", float1*float2, (int)(float1*float2));
	return 0;
	
}
