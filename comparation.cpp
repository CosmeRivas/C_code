#include<stdio.h>
#include<string.h>
int main(){
	char chaine1[]="SUPTEM", chaine2[]="BONJOUR", chaine3[]="SUPTEM";
	printf("%d\n", strcmp(chaine1, chaine2));
	printf("%d", strcmp(chaine1, chaine3));
	return 0;
	
	
}
