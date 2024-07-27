#include<stdio.h>
#include<string.h>
int main(){
	char ch[10];
	int i;
	printf("Entrer une chaine : ");
	scanf("%s", ch);
	for(i=0; i<strlen(ch); i++){
		printf("%c\t", ch[i]);
	}
	
	return 0;
}

