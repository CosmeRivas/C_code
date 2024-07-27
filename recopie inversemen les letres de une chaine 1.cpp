#include<stdio.h>
#include<string.h>
int main(){
	char ch[6];
	char ch2[14];
	printf("entre la chaine: ");
	scanf("%s", ch);
	int i, j=0;
	for( i=strlen(ch)-1; i>=0; i--){
		ch2[j]=ch[i];
		j++;
	}
		
	printf("%s",ch2);
	

	return 0;
}
