#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char ch[10];
	int i,j;
	printf("Entrer une chaine : ");
	scanf("%s", ch);
	j=sizeof(ch);
	for(i=0; i<j; i++){
		printf("%c", ch[i]);
		
	}
	
	return 0;
}

