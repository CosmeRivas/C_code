#include<stdio.h>
int factorielle(int a){
	if(a==0)
		return 1;
	return a*factorielle(a-1); 
}
int main(){
	int f;
	f=factorielle(4);
	printf("la factorielle est: %d", f);
	
	return 0;
}
