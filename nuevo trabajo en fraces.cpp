	#include <stdio.h> 
	#include <stdlib.h>
	#include <time.h> 
	int main() {
		int numero, a,i, z,j; 
		printf("Entre votre nombre: ");
		scanf("%d", &a);
		srand(time(NULL)); 
		numero=rand() % 100;
		z=numero;
		
		char c[]="\n il vous faut en petit peu, continue la addition\n";
		char h[]="\n vous es en chemin, continué la addition\n";
		char k[]="\n vous vous aprochez, continué la addition\n";
		char l[]="\n vous vous aprochez, continué la addition\n";
		char pp[]="\n vous vous aprochez, continué la addition\n";
		char m[]="\n vous vous aprochez, continué la addition\n";
		char n[]="\n vous vous aprochez, continué la addition\n";
		char o[]="\n vous vous aprochez, continué la addition\n";
		char p[]="c'est trop petit\n";
		char q[]="ajouté-le 1\n";
		char r[]="\n c'est très grande\n";
		char s[]="\n il vous faut un peu, continué la sustraction\n";
		char t[]="\n pas très loin, continué la sustraction\n";
		char u[]="\n continué la sustraction, vous vous aprochez\n";
		char v[]="\n continué la sustraction, vous vous aprochez\n";
		char w[]="\n continué la sustraction, vous vous aprochez\n";
		char x[]="\n continué la sustraction, vous vous aprochez\n";
		char y[]="\n continué la sustraction, vous vous aprochez\n";
		char zz[]="\n continué la sustraction, vous vous aprochez\n";
		char zzz[]="\n sustraé-le 1\n";
		
		if(numero==a)
				printf("VOUS AVEZ REUSI");
		else{
			for(i=0; i=a; i++) {
				if(a == numero)
				break;	
				if(a==numero-2){
					for(j=0; j<47; j++){
						printf("%c", c[j]);
					}
				}
			    if(a==numero-3){
			    	for(j=0; j<38; j++){
						printf("%c", h[j]);
					}
				}
				if(a==numero-4){
					for(j=0; j<40; j++){
						printf("%c", k[j]);
					}
				}
				if(a==numero-5){
					for(j=0; j<39; j++){
						printf("%c", l[j]);
					}
				}
				if(a==numero-6){
					for(j=0; j<39; j++){
						printf("%c", m[j]);
					}
				}
				if(a==numero-7){
					for(j=0; j<39; j++){
						printf("%c", n[j]);
					}
				}
				if(a==numero-8){
					for(j=0; j<39; j++){
						printf("%c", o[j]);
					}
				}
				if(a==numero-9){
					for(j=0; j<39; j++){
						printf("%c", pp[j]);
					}
				}	
				if(a<=numero-10){
					for(j=0; j<16; j++){
						printf("%c", p[j]);	
					}
				}
				if(a==numero-1){
					for(j=0; j<11; j++){
						printf("%c", q[j]);
					}
				}	
				if(a>=numero+10){
					for(j=0; j<17; j++){
						printf("%c", r[j]);
					}
				}
				if(a==numero+2){
					for(j=0; j<44; j++){
						printf("%c", s[j]);
					}
				}
				if(a==numero+3){
					for(j=0; j<39; j++){
						printf("%c", t[j]);
					}
				}
				if(a==numero+4){
					for(j=0; j<44; j++){
						printf("%c", u[j]);
					}
				}
				if(a==numero+5){
					for(j=0; j<44; j++){
						printf("%c", v[j]);
					}
				}
				if(a==numero+6){
					for(j=0; j<44; j++){
						printf("%c", w[j]);
					}
				}
				if(a==numero+7){
					for(j=0; j<44; j++){
						printf("%c", x[j]);
					}
				}
				if(a==numero+8){
					for(j=0; j<44; j++){
						printf("%c", y[j]);
					}
				}
				if(a==numero+9){
						for(j=0; j<44; j++){
						printf("%c", zz[j]);
					}
				}
				if(a==numero+1){
						for(j=0; j<11; j++){
						printf("%c", zzz[j]);
					}
				}
				
				printf("\n try again: ");
				scanf("%d", &a);
				}
			
			}
		printf("\n LE NOMBRE SELECTIONE PAR LE PROGRAMME C'EST: %d\n",numero);
		return 0;
	}
