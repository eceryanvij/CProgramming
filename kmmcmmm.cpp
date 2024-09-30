//Convert KM to M, CM, MM.

#include <stdio.h>

int main(){

	float kilometer;
	printf("Enter the number of kilometers:");
	scanf("%f", &kilometer);
	printf("Metres : %.2fM, Centimeters : %.2fCM, Millimeteres : %.2fMM", kilometer*1000, kilometer*100000, kilometer*1000000);
	return 0;
}
