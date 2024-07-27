#include<stdio.h>
int main(){
	int t[]={17,38,10,25,72,6};
	int i, s;
	s = 0;
	for(i=1; i<6; i++){
		s+=t[i];
	}
		printf("le somme est: %d", s);
	return 0;
}
