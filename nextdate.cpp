#include <stdio.h>

int main(){
	int day, month, year;
	
	printf("Enter day: ");
	scanf("%d", &day);
	printf("Enter month: ");
	scanf("%d", &month);
	printf("Enter year: ");
	scanf("%d", &year);
	
	if (month==1 || month==3 || month==5 || month== 7 || month == 8 || month == 10 || month == 12){
		if (day < 1 || day > 31){
			printf("INVALID DATE");
			return 0;
		}
		else{
			if (day == 31){
				if (month == 12){
					month = 1;
					year += 1;
					day = 1;
				}
				else{
					month += 1;
					day = 1;
				}
			}else{
				day += 1;
			}
		}
	}
	
	else if (month==4 || month==6 || month==9 || month== 11){
		if (day < 1 || day > 30){
			printf("INVALID DATE");
			return 0;
		}
		else{
			if (day == 30){
				day = 1;
				month += 1;
				
			}
			else{
				day += 1;
			}
		}
	
	}
	
	else if (month == 2){
		if ((year%4 == 0 && year % 100 != 0) || year % 400 == 0){
			if (day < 1 || day > 29){
				printf("INVALID DATE");
				return 0;
			}
			else{
				if (day == 29){
					month += 1;
					day = 1;
				}
				else{
					day += 1;
				}
			}
		}
		else
		{
			if (day < 1 || day > 28){
				printf("INVALID DATE");
				return 0;
			}
			else{
				if (day == 28){
					month += 1;
					day = 1;
				}
				else{
					day += 1;
				}
			}
			
		}
	}	
	else{
		printf("INVALID DATE");
		return 0;
	}
	
	printf("%d %d %d", day, month, year);
	return 0;
	
}
