#include<stdio.h>
int main(){
	float b;
	printf ("introit la note: ");
	scanf("%f", &b);
	if ( b>=16 && b<=18 ){
	
		printf("trés bien");
	}
	if(b < 16 && b > 14){
	
		printf("Bien");
	}
	if( b>=12 && b<=11  ){
	
		printf("Assez bien");
	}
	if ( b>=10 && b<=9 ){
		printf("passable");
	}
	return 0;
}
