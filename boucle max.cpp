#include<stdio.h>
int main(){
	int t[]={17,38,10,25,72,6};
	int i, max;
	max = t[0];
	for(i=1; i<6; i++){
		if(t[i]>max){
			max = t[i];
		}
	}
	printf("le max est: %d", max);
	return 0;
}
