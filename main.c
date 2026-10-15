#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	if(t<15){
		printf("LANH");
	}
	if(15<t&&t<25){
		printf("MAT");
	}
	else if(25<t&&t<35){
		printf("NONG");
	}
	else{
		printf("RAT NONG");
	}
	

	
	return 0;
}
