#include <stdio.h>
int main(){
	float  distance,order_value;
	
	scanf("%f\t",&distance);
	
	scanf("%f",&order_value); 
	
	if(distance<=0&&order_value<0){
		printf(" INVALID");
	}
	if (distance<=15&&order_value>=500000){
		printf("0000");
	}
	
	if(distance>=1&&distance<=5){
		printf("15000");
	}
	else if(distance>=6&&distance<=15){
		printf("25000");
	}
	else{
		printf("40000");
	}
	

	return 0;
}

