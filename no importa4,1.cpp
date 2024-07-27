#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	
	int i,l;
	char a[10];
	printf("introduce tu cadena de caracteres: ");
	scanf("%s", a);
	l=sizeof(a);
	for(i=0; i<l; i++){
		printf("%c", a[i]);
	}
	return 0;
}
