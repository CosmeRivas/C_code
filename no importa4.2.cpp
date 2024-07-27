#include<stdio.h>
int main(){
	char c;
	int a,b,j,i;
	printf("introduce tu numero: ");
	scanf("%d", &a);
	b=4;
	for(j=0; j<b; j++){
	
		if(a==b){
		
			break;
			printf("has aceptado");
			}
		else{
			for(i=0; i<a; i++){
				if(a==b)
					break;
				if(a==b+10)
					printf("es muy grande");	
				if(a==b-10)
					printf("es muy pequeno");
			
		
			}	
		}
		printf("deseas continuar jugando?: ");
		scanf("%s", c);
		if (c==' no')
			break;
	}
	return 0;
}
