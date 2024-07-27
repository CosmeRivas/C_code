#include<stdio.h>
#include<string.h>
int main(){
	char chaine1[10];
	int i, t=0;
	
	printf ("entre cette chaine: ");
	scanf("%s", chaine1);
	for(i=0; i<strlen(chaine1); i++){
	
		if(chaine1[i]=='e'){
			printf("1");
			break;		
		}
	
	}
	printf("%d\t", t);
	return 0;
	
}
