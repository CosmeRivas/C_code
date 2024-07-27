#include<stdio.h>
int maint(){
	float a, b, max;
	printf("valeur a:");
	scanf("%f", &a);
	printf("valeur b: ");
	scanf("%f, &b");
	if (a>b)
	  max = a;
	else
	  max = b;
	printf("le max c'est %f", max);
	return 0;
}
