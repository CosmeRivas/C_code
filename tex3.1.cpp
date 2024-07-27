#include<stdio.h>
int main(){
	float a, r;
	printf("entre a: ");
	scanf("%f", &a);
	if(a<10)
		r= a*0.5;
	else if (a<20) 
		r= a*0.4;
	else
		r= a*0.3;
	printf("le resultat est: %.2f", r);
	
	return 0;
	
	}
