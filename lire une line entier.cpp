#include<stdio.h>
#include<string.h>
int main(){
	char chaine1[20];
	printf ("entre cette chaine: Bonjour SUPTEM -> ");
	fgets( chaine1, sizeof(chaine1), stdin);
	printf("%s", chaine1);
	return 0;
	
}
