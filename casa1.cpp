#include<stdio.h>
int maint(){
	int a;
	printf("entre a:" );
	scanf("%f", &a);
	
	if (a%3 == 0);
		printf("%f est divisible par 3", a);
	else 
		printf("%f n'est pas divisible par 3," a);
	
	return 0;
}
