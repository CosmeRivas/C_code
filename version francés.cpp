	#include <stdio.h> 
	#include <stdlib.h>
	#include <time.h> 
	int main() {
		int numero, a,i, z; 
		printf("Entre votre nombre: ");
		scanf("%d", &a);
		srand(time(NULL)); 
		numero=rand() % 100;
		z=numero;
		if(numero==a)
				printf("VOUS AVEZ REUSI");
		else{
			for(i=0; i=a; i++) {
				if(i++ == z)
				break;	
			  
				if(a==numero-2){
					printf("il vous faut en petit peu, continue la addition\n");
				}
			    if(a==numero-3){
					printf("vous es en chemin,continu� la addition\n");
				}
				if(a==numero-4){
					printf("vous vous aprochez,continu� la addition\n");
				}
				if(a==numero-5){
					printf("vous vous aprochez,continu� la addition\n");
				}
				if(a==numero-6){
					printf("vous vous aprochez,continu� la addition\n");
				}
				if(a==numero-7){
					printf("vous vous aprochez,continu� la addition\n");
				}
				if(a==numero-8){
					printf("vous vous aprochez,continu� la addition\n");
				}
				if(a==numero-9){
					printf("vous vous aprochez,continu� la addition\n");
				}	
				if(a<=numero-10){	
					printf("c'est trop petit\n ");
				}
				if(a==numero-1){
					printf("ajout�-le 1\n");
				}	
				if(a>=numero+10){
					printf("c'est tr�s grande\n");
				}
				if(a==numero+2){
					printf("il vous faut un peu, continu� la sustraction\n");
				}
				if(a==numero+3){
					printf("pas tr�s loin, continu� la sustraction\n");
				}
				if(a==numero+4){
					printf("continu� la sustraction, vous vous aprochez\n");
				}
				if(a==numero+5){
					printf("continu� la sustraction, vous vous aprochez\n");
				}
				if(a==numero+6){
					printf("continu� la sustraction, vous vous aprochez\n");
				}
				if(a==numero+7){
					printf("continu� la sustraction, vous vous aprochez\n");
				}
				if(a==numero+8){
					printf("continu� la sustraction, vous vous aprochez\n");
				}
				if(a==numero+9){
					printf("continu� la sustraction, vous vous aprochez\n");
				}
				if(a==numero+1){
					printf("sustra�-le 1\n");
				}
				
				printf("try again: ");
				scanf("%d", &a);
				}
			
			}
		printf("LE NOMBRE SELECTIONE PAR LE PROGRAMME C'EST: %d\n",numero);
		return 0;
	}
