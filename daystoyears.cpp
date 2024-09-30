//Convert days to years.

#include <stdio.h>

int main(){
	float numberofdays;
	printf("Enter number of days:");
	scanf("%f", &numberofdays);
	printf("The number of years is: %.2f", numberofdays/365);
	return 0;
}
