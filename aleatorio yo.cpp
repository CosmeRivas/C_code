#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	printf("%d\n", rand() % 500);
	printf("%d\n", rand() %58);
	printf("%d\n", rand() %499);
	return 0;
}
