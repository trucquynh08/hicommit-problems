#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	
	if (t<15){
		printf("LANH");
	}
	if(t>15&&t<25){
		printf("MAT");
	}
	if(t>25&&t<35){
		printf("NONG");
	}
	if(t<35){
		printf("RAT_NONG");
	}
	
	return 0;
}