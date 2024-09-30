#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int limit = 5;
	int question_num = 1;
	int a, b;
	int i;
	int sign = 0;
	int answer;
	
	for(i = 1; i <= 5; i++){
		
		a = rand()%10;
		b = rand()%10;
		
		while(sign > 4 ||  sign == 0){
			sign = rand()%10;
		}
		
		if (sign == 1){
			printf("%d+%d=");
			scanf("%d, &answer", a, b);
			
			if (answer != a+b){
				sign = 0;
				i = i-1;
				continue;
			}
			
		}
		else if(sign == 2){
			printf("%d-%d=", a, b);
			scanf("%d, &answer");
			
			if (answer != a-b){
				sign = 0;
				i = i-1;
				continue;
			}
		
		}else if(sign == 3){
			printf("%d*%d=",a,b);
			scanf("%d, &answer");
			
			if (answer != a*b){
				sign = 0;
				i = i-1;
				continue;
			}
			
		}else if(sign == 4){
			printf("%d/%d=",a, b );
			scanf("%d, &answer");
			
			if (answer != a/b){
				i = i-1;
				sign = 0;
				continue;
				
			}
			
			
		}
		
		
	}

	return 0;
}
	
	
	
	
	
