#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
	
	int i,j,n,k;
	char a[]="lo siento no es correcto";
	char b[]="has acertado";
	srand(time(NULL));
	n=rand()%20;
	printf("cual es el numero elegido por el sistema?: ");
	scanf("%d", &k);
	j=sizeof(a);
	if(n==k)
		for(int u=0; u<j; u++)
			printf("%c", b[u]);
	else
		for(i=0; i<strlen(a);i++)
			printf("%c",a[i]);
		
	
	return 0;
}
