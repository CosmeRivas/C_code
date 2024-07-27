#include<stdio.h>
int main(){
	int t[]={17,38,10,25,72,6, 25,13};
	int i, x,c;
	printf("entre x: ");
	scanf("%d", &x);
	c=0;
	for(i=0; i<8; i++){
		if(t[i]==x){
			c++; 
		}
	}
	printf(" x se truve dans la case %d\n", c);
	return 0;
}
