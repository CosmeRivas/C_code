#include<stdio.h>
#include<string.h>
int main(){
	char a[29];
	int e=0,i;
	printf("introduce tu cadena de caracteres: ");
	scanf("%s", a);
	for(i=0; i<strlen(a); i++){
		if(a[i]=='p')
			e=1;
			break;
	}
	printf("%d", e);
	return 0;
}
