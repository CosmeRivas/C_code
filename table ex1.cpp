#include<stdio.h>
int main(){
	int tablnt[]={17,38,10,25,72};
	int i;
	//question A
	for  (i=1; i<5; i++){
	
	printf("%d\n", tablnt[i]);
	}
	//question b
	for  (i=0; i<3; i++){
		printf("%d\n", tablnt[i]);
	}
	//question c
		for  (i=4; i>=0; i--){
		printf("%d\n", tablnt[i]);
	}
	return 0;
}
