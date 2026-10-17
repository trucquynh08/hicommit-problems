#include <stdio.h>
int main(){
	int  distance,order_value;
	
	scanf("%d\t",&distance);//kc
	
	scanf("%d",&order_value); //gtdh
	
	if(distance<=0||order_value<0){
		printf(" INVALID");//k hop le
	}
	if (distance<=15&&order_value>=500000){
		printf("0");
	}
	
	else if (distance>=1&&distance<=5){
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

