#include <stdio.h>
int main(){
	int t;
	printf("nhap nhiet do: ");
	scanf("%d",&t);
	if(t<15){
		printf("LANH");
	}
	if(15<t&&t<25){
		printf("MAT");
	}
	if(25<t&&t<35){
		printf("NONG");
	}
	if(t>35){
		printf("RAT NONG");
	}
	

	
	return 0;
}
