#include<stdio.h>
int main(){
	int t[]={17,38,10,25,72,6, 25,13};
	int i, x;
	printf("entre x: ");
	scanf("%d", &x);
	for(i=0; i<8; i++){
		if(t[i]==x){
			printf(" x se truve dans la case %d\n", i);
			break; 
		}
	}
	return 0;
}
