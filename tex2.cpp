#include<stdio.h>
int main(){
int a, b;
	printf("entre a: ");
	scanf("%d", &a);
	printf("entre b: ");
	scanf("%d",&b);
	 ((a>0 && b>0) || (a<0 && b<0))? printf("le produit est positive"): printf("le produit est negative");
	return 0;
	}
