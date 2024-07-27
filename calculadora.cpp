#include<stdio.h>
int main(){
	int a, b;
	char c;
	printf("entre l'operation: ");
	scanf("%c", &c);
	printf("entre b :");
	scanf("%d", &b);
	printf("entre a :");
	scanf("%d", &a);
	switch(c){
		case '+':
			printf("addition : %d", a+b);
			break;
		case '*':
			printf("addition : %d", a*b);
			break;
		case '-':
			printf("addition : %d", a-b);
			break;
		defaut:
			printf("division : %d", a/b);		
			
	}
	return 0;
	
	
	
	
	
}
