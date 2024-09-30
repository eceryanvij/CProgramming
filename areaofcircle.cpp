//This program is to find the area of the circle.

#include <stdio.h>

int main(){
	float radius, pi = 3.1415;
	printf("Enter radius of circle: ");
	scanf("%f", &radius);
	printf("The area of the circle is : %.2f ", pi*radius*radius);
	return 0;
}
