#include<stdio.h>
int main(){
	int a, b;
	char c;
	printf("entre a:");
	scanf("%d", &a );
	printf("entre b:" );
	scanf("%d", &b);
	
	printf("l'oppération c:");
	scanf("%d, &c");
	
	switch (c){
		case '+' :
			printf("addition; %d", a+b);
			break;
		case '-' :
			printf("sustraction; %d", a-b);
			break;
		case '*' :
			printf("multiplication; %d", a*b);
			break;
		default:
				printf("division: %d", a/b);
	}
	return 0; 
	}
