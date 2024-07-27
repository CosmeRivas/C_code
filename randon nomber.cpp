#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int N, a;
	srand(time(NULL));
	for (a=1; a<100; a++){
		N=rand() % 100 +1;
		printf("%d\n",a,N);
	}
	
}
