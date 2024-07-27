#include<stdio.h>
int main(){
	int n, i,f;
	printf("entre le nombre: ");
	scanf("%d", &n);
	f=1;
	for(i = 1 ; i <= n ; i++){
		f*=i;
	}
	printf("%d", i);
	return 0;
}
