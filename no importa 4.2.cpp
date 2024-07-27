#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int m,i, d=0;
	char a[50];
	char b[40];
	printf("dame tu cadena de caracteres: ");
	scanf("%s", a);
	m=sizeof(a);
	
	for(i=0; i<strlen(a); i++){
		if(a[i]=='e')
		    continue;
		d++;
	    printf("%c", a[i]);
	   
}
    printf("%c", a[i]);	
	return 0;
}
