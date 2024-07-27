#include<stdio.h>
#include<string.h>
int main(){
	char ch[6];
	char ch2[14];
	printf("entre la chaine: ");
	scanf("%s", ch);
	int i, j=0;
	for(i=0; i<strlen(ch); i++){
		ch2[j]=ch[i];
		ch2[j+1]='*';
		j+=2;
	}
		
	printf("%s",ch2);
	

	return 0;
}
