#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char a[10];
	int i;
	printf("introduce tu cadena de caracteres: ");
	scanf("%s", a);
	for(i=0; i<strlen(a); i++)
		a[i]=toupper(a[i]);
	printf("%c", a[i]);
	return 0;
}
