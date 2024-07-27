#include<stdio.h>
int main(){
	int t[]={17,38,10,25,72,6};
	int i, x,c;
		printf("entre la valeur de x: ");
	scanf("%d", &x);
	c=-1;
	for(i=0; i<6; i++){
		if(t[i]==x){
			c=i;
		}
	}
	printf("x se trouve dans %d");
	return 0;
}
