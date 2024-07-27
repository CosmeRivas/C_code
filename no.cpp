#include<stdio.h>
int main(){
	int T[] = {17, 38, 10, 25, 72};
	int i, m;
	
	m=T[0];
	for(i=0; i<5; i++){
		m+=T[i];
		
	}
		printf("%d", m);
	
	return 0;
}
