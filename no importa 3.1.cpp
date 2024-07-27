#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
	char a[]="es correcto";
	char b[]="lo siento, no has asertado";
	int i, j,d,f,o;
	srand(time(NULL));
	d=rand()%5;
	o=sizeof(b);
	printf("cual es el numero seleccionado por el sistema?: ");
	scanf("%d",&f);
	if(d==f){
		for(j=0; j<strlen(a); j++)
			printf("%c", a[j]);
	}
	else{
		for(int y=0; y<o; y++)
			printf("%c", b[y]);
	}
	return 0;
}
