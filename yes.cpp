#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
int main() {
	int numero, a,i,j; 
	printf("introduce tu numero: ");
	scanf("%d", &a);
	srand(time(NULL)); 
	numero=rand() % 100;
	
	if(numero==a)
			printf("has aceptado");
	else{
		i=0;
		do {
	
			if(a<numero-10){	
				printf("es muy pequeno\n ");
			}
			if(a<numero-5 && a==numero-9){
				printf("te estas acercando\n");
			}
			if(a==numero-1){
				printf("sumale uno mas\n");
			}	
			if(a>numero+10){
				printf("muy grande\n");
			}
			if(a>numero+5 && a<numero+4){
				printf("te estas acercando\n");
			}
			if(a>numero+2 && a<numero+3){
				printf("un poco mas\n");
			}
			if(a==numero+1){
				printf("sumale 1\n");
			}
			
			printf("introduce tu numero: ");
			scanf("%d", &a);
			i++;
			}
		while(i=3);	
		}
	printf("%d\n",numero);
		
	return 0;
} 
