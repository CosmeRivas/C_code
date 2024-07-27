#include<stdio.h>
int main(){
	int i,j;
	//boucle extérieure
	for (i = 10; i<8; ++i){
		printf("%d\n", i);
		
		//boucle intérieure
		for (j=10; j<8; ++j){
		printf("%d\n", j);	
		}
	}
	
	return 0;
	
}
