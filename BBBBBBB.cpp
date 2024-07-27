	#include <stdio.h> 
	#include <stdlib.h>
	#include <time.h> 
	int main() {
		int numero, a,i, z; 
		printf("introduce tu numero: ");
		scanf("%d", &a);
		srand(time(NULL)); 
		numero=rand() % 100;
		z=numero;
		if(numero==a)
				printf("has aceptado");
		else{
			for(i=0; i=a; i++) {
				if(i == z)
				break;	
			  
				if(a==numero-2){
					printf("te estas acercando, sigue sumando\n");
				}
			    if(a==numero-3){
					printf("te estas acercando, sigue sumando\n");
				}
				if(a==numero-4){
					printf("te estas acercando, sigue sumando\n");
				}
				if(a==numero-5){
					printf("te estas acercando, sigue sumando\n");
				}
				if(a==numero-6){
					printf("te estas acercando, sigue sumando\n");
				}
				if(a==numero-7){
					printf("te estas acercando, sigue sumando\n");
				}
				if(a==numero-8){
					printf("te estas acercando, sigue sumando\n");
				}
				if(a==numero-9){
					printf("te estas acercando, sigue sumando\n");
				}	
				if(a<=numero-10){	
					printf("es muy pequeno\n ");
				}
				if(a==numero-1){
					printf("sumale uno mas\n");
				}	
				if(a>=numero+10){
					printf("muy grande\n");
				}
				if(a==numero+2){
					printf("sigue restando,  un poco mas\n");
				}
				if(a==numero+3){
					printf("sigue restando\n");
				}
				if(a==numero+4){
					printf("sigue restando, ya falta poco7\n");
				}
				if(a==numero+5){
					printf("sigue restando\n");
				}
				if(a==numero+6){
					printf("sigue restando\n");
				}
				if(a==numero+7){
					printf("sigue restando\n");
				}
				if(a==numero+8){
					printf("sigue restando\n");
				}
				if(a==numero+9){
					printf("sigue restando\n");
				}
				if(a==numero+1){
					printf("restale 1\n");
				}
				
				printf("INTENTALO DE NUEVO: ");
				scanf("%d", &a);
				}
			
			}
		printf("EL NUMERO SELECCIONADO POR EL PROGRAMA ES: %d\n",numero);
		return 0;
	}
