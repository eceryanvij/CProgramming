#include <stdio.h>

int main(){
	int units, price, priceperunit, surcharge;
	priceperunit = 10;
	surcharge = 200;
	printf("Enter number of units consumed: ");
	scanf("%d", &units);
	
	if (units >=0 && units <= 100){
		price = units*priceperunit;
	}
	else if (units > 100){
		price = units*priceperunit + surcharge;
	}
	else{
		printf("INVALID");
		return 0;
	}
	
	printf("The price is %d", price);
	return 0;

}
