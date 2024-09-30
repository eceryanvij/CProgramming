#include <stdio.h>

int main(){
	float sub1, sub2, sub3, sub4, sub5;
	float percentage;
	printf("Enter subject marks out of 100 (seperated by space): ");
	scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
	
	percentage = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
	printf("%.2f%%\n", percentage);
	if (percentage >= 90){
		printf("GRADE A");
	}
	else if (percentage >= 80 && percentage < 90){
		printf("GRADE B");
	}
	else if (percentage >= 70 && percentage < 80){
		printf("GRADE C");
	}
	else if (percentage >= 60 && percentage < 70){
		printf("GRADE D");
	}
	else if (percentage >= 40 && percentage < 60){
		printf("GRADE E");
	}
	else if (percentage < 40){
		printf("GRADE F");
	}
	return 0;

}


