#include<stdio.h>
#include<string.h>
int main(){
	
	int i, e;
	char t[7];
	printf("introduce tu cadena de caracteres: ");
	scanf("%s", t);
	for(i=0; i<strlen(t); i++){
	
		printf("%c",t[i]);
	}
	return 0;
}
