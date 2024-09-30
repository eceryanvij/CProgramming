//This program calculates the percentage of a student given the marks of 5 different subjects.

#include <stdio.h>

int main(){
	int a, b, c, d, e;
	float percentage;
	printf("Enter the marks of all 5 subjects, seperated by space:");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	percentage = (a+b+c+d+e)/5.000;
	printf("The total percentage is : %.2f%%", percentage);
	return 0;
	
} 
