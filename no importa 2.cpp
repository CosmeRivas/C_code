#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[]="cosme rivas";
	int c;
	c=sizeof(a);
	for(int i=0; i<c; i++){
		if(a[i]=='e')
			continue;
		printf("%c", a[i]);
	}
	return 0;
}
