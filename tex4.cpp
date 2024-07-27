#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, d, U1, U2;
	printf("entre a:"); 
	scanf("%f", &a);
	printf("entre b:");
	scanf("%f", &b);
	printf("entre c: ");
	scanf("%f", &c);
	d= b*b- 4*a*c; 
	if (d>0){
		U1= (-b -sqrt(d))/ (2*a);
		U2= (-b +sqrt(d))/ (2*a);
		printf("deux solutions : U1=%f et U2=%f", U1, U2 );
		}
	if (d=0){
		U1= -b/(2*a);
		printf("une seule solution: U1=%f", U1);
		}
	if (d<0){
		printf("l'equatoin n'ai pas de solution dans R");
		}
	return 0;
	}
