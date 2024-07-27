#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, d, U1, U2;
	printf("entre a:"); 
	scanf("%d", &a);
	printf("entre b:");
	scanf("%d", &b);
	printf("entre c: ");
	scanf("%d", &c);
	d= b*b- 4*a*c; 
	if (d>0)
		U1= (-b -sqrt(d))/ (2*a)
		U2= (-b +sqrt(d))/(2*a)
	if (d=0)
		U1= -b/(2*a);
	if (d<0)
		printf("l'equatoin n'ai pas de solution")
	return 0;
}
