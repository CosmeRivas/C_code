#include<stdio.h>

int main(){
	int i;
	//boucle for
	for (i=0; i<5; i ++){
		printf("%d\n", i);
	}
	printf("la derniére valeur de i est %d\n", i);
	//boucle while
	i=0;
	while(i<5){
		printf("%d\n", i);
		i++;
	}
	return 0;
}
