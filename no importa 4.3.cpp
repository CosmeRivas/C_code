#include<stdio.h>
#include<string.h>
int main(){
	char ch[10];
	int i, t=0;
	printf("Entrer une chaine : ");
	scanf("%s", ch);
	for(i=0; i<strlen(ch); i++){
		if(ch[i] == 'e'){
			t = 1;
			break;
		}
	}
	printf("%d\t", t);
	
	return 0;
}
