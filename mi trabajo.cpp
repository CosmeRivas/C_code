#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
int main() {
	int numero, a,i,j, z; 
	printf("introduce tu numero: ");
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
		      	
			if(a>=numero-10 ){	
				printf("muy pequeño\n ");
			}
			if( a<=numero-9 ){
				printf("te acercas, sigue sumando\n");
			}
			if(a>=numero+10){
				printf("muy grade grande'\n");
			}
			if( a<=numero+9){
				printf("te acercas sigue restando\n");
			}
			
			printf("tray again: ");
			scanf("%d", &a);
			}
		
		}
	printf("EL NUMERO SELECCIONADO POR EL PROGRAMA ES: %d\n",numero);
	return 0;

}


