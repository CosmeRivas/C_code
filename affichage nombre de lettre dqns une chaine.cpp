#include<stdio.h>
#include<string.h>
int main(){
	char ch[10];
	int i, c=0;
	printf("entre la chaine: ");
	scanf("%s", ch);
	for(i=0; i<strlen(ch); i++){
		if(ch[i]=='e'){
			c++;
		}
	}
	printf("le nombre de 'e' dans ch est: %d", c);
	return 0;
}
