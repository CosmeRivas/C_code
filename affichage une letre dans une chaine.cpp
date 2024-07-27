#include<stdio.h>
#include<string.h>
int main(){
	char ch[10];
	int i, t=0;
	printf("entre la chaine: ");
	scanf("%s", ch);
	for(i=0; i<strlen(ch); i++){
		if(ch[i]=='e'){
			t=1;
			printf("%s", t);
		}
	}
	printf(0);
	return 0;
}
