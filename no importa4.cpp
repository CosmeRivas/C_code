#include<stdio.h>
int main (){
	int i,j, ctr;
	char alph='A';
	int n,blk;
	int chr=1;
	printf("input letters no: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(blk=1; blk<=n-i; blk++)
		printf(" ");
		for(j=0; j<=(ctr/2); j++){
			printf("%c", alph++);
		}
		alph=alph-2;
		for(j=0; j<(ctr/2); j++){
			printf("%c", alph--);
		}
		ctr=ctr+2;
		alph='A';
		printf("\n");
	}
}
