//Calculate Simple Interest and Compound Interest

#include <stdio.h>
#include <math.h>

int main() {
	int principal, timeinyears;
	float interestrate;
	
	printf("Enter principal amount: ");
	scanf("%d", &principal);
	printf("Enter time in years : ");
	scanf("%d", &timeinyears);
	printf("Enter interest rate: ");
	scanf("%f", &interestrate);
	
	printf("Simple Interest is: %f \n Compound Interest is(COMPOUNDED ANNUALLY) : %f", (float)((principal*interestrate*timeinyears)/100), (float)((principal*pow((1 + interestrate/100), timeinyears) - principal))  );
	return 0;

	
}
