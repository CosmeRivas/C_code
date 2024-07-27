#include<stdio.h>
int main(){
	int n, i,p;
	float x;
	printf("entre le nombre: ");
	scanf("%f", &x);
	printf("entre la poissance: ");
	scanf("%d", &n);
	p=1;
	for(i = 1 ; i <= n ; i++){
		p*=x;
	}
	printf("n a la puissance est: %.2f", p);
	return 0;
}
