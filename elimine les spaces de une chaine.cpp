#include<stdio.h>
#include<string.h>
int main(){
	char ch[12];
	char ch2[14];
	printf("entre la chaine: ");
	fgets(ch, sizeof(ch), stdin);
	int i, j=0;
	for( i=0; i=strlen(ch);  i++){
		if(ch[i]!=' '){
			ch2[j]=ch[i];
			j++;
		}
	
	}
		
	printf("%s",ch2);
	

	return 0;
}
