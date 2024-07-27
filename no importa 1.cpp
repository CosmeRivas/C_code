#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i,e[]={1,6,88,4,34,7,0,24}, t,j=0;
	t=sizeof(e);
	for (i=0; i<t; i++){
		if ( i>j)
			i=j;
		else
			i=i;
		printf("%d",e[i]);
			
	}
	return 0;
}
