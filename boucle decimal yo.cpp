#include<stdio.h>
int main(){
	float t[]={7.5,2.3,54.9,500.78, 4.3, 2.9};
	float p, max;
	max = t[0];
	for(p=1; p<8; p++){
		if(t[5]>max){
			max=t[5];
		}
	}
	printf("le max est: %f", max);
	return 0;
}
