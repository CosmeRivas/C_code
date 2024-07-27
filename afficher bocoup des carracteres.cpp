#include<stdio.h>
#include<string.h>
int main(){
	char ch[10];
	int i;
	printf("entre une chaine: ");
	scanf("%s", ch);
	for(i=0; i<strlen(ch); i++){
		printf("%c\n", ch[i]);
	}
	return 0;
}
