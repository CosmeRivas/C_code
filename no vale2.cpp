#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
int main() {
	int numero, a,i, z,c; 
	printf("introduce tu numero: ");
	scanf("%d", &a);
	srand(time(NULL)); 
	numero=rand() % 10;
	z=numero;
	if(numero==a)
		printf("has aceptado");
	else{
		for(i=0; i=a; i++) {
			if(i++ == z)
			break;	
    	switch (c){
    		case 'a' :
    			if(a>=numero-2 && a==numero-9)
					printf("te estas acercando, sigue sumando\n");
				break;			
    		case 'b' :
    			if(a<=numero-10)	
					printf("es muy pequeno\n ");
    			break;
    		case 'c' :
    			if(a==numero-1)
					printf("sumale uno mas\n");
    			break;
    		case 'd' :	
    				if(a>=numero+10)
						printf("muy grande\n");
 			case 'e' :
 				if(a==numero+2 && a<=numero+9)
					printf("sigue restando\n");
 		case 'f' :
 				if(a==numero+1)
					printf("restale 1\n");
 		printf("INTENTALO DE NUEVO: ");
		scanf("%d", &a);
 				
    	default :
    		printf("C'est une autre lettre");
		}    
	 } 
    	printf("EL NUMERO SELECCIONADO POR EL PROGRAMA ES: %d\n",numero);
			return 0;
}
    return 0;
}
