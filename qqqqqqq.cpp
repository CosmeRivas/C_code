#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
int main() {
	int numero, a,i, z; 
	printf("entre votre nombre: ");
	scanf("%d", &a);
	srand(time(NULL)); 
	numero=rand() % 100;
	z=numero;
	if(numero==a)
			printf("c'est correct");
	else{
		for(i=0; i=a; i++) {
			if(i++ == z)
			break;	
		      	
			if(a<=numero-10){	
				printf("c'est trop petit\n ");
			}
			if(a>=numero-2 && a<=numero-9){
				printf("tu t'aproche\n");
			}
			if(a==numero-1){
				printf("ajouté 1 \n");
			}	
			if(a>=numero+10){
				printf("c'est tres grande'\n");
			}
			if(a>=numero+2 && a<=numero+9){
				printf("continué la sustraction\n");
			}
			if(a==numero+1){
				printf("sustrait-le 1\n");
			}
			
			printf("tray again: ");
			scanf("%d", &a);
			i++;
			}
		
		}
	printf("EL NUMERO SELECCIONADO POR EL PROGRAMA ES: %d\n",numero);
	return 0;
}
