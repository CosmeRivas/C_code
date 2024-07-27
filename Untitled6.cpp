#include<stdio.h>

int maint(){
	int x;
	printf("entre x:");
	scanf("%d", &x);
	if(x%3 == 0)
	printf("%d est divisible par 3", x);
	else
	printf("%d nes pas divisible par 3, x");
	
	return 0;
}
