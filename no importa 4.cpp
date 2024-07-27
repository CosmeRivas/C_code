#include<stdio.h>
#include<string.h>
int main(){
	char ch[]=7;
	int i;
	printf("introduce: ");
	scanf("%s", ch);
	for(i=0; i<8; i++){
		printf("%c", ch[i]);
	}
	return 0;
}
