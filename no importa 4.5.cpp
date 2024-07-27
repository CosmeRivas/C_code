#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int numero;
	srand(time(NULL));
	numero = rand() %50;
	printf("%d", numero);
	
}
