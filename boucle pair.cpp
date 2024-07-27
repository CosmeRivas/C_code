#include<stdio.h>
int main(){
	int t[]={32,5,12,8,3,75,2,15};
	int i;
	for(i=0; i<8; i++){
		if(t[i]%2==0){
			printf("%d le nombre est pair\n", t[i]);
		}
		else{
			printf("%d est impair\n", t[i]);
		}
	}
		return 0;
}
