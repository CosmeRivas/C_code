#include<stdio.h>
int main (){
	int t[4]={10, 5, 3, 2};
	int i;
	*t=20;
	*(t + 1)
	for(i=0; i<4; i++){
		printf("%d\n", *(t + i));
	}
	return 0;
}