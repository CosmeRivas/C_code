#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int X=rand () % 10;
	printf("%d\n", X );
	printf("%d\n", rand );
	printf("%d\n", rand );
	return 0;
}
