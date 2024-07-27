#include<stdio.h>
int somme(int a, int b){
	int s;
	s=a+b;
	return s;
}
int main (){
	int s1;
	s1=somme(3,4);
	printf("la somme est: %d", s1);
	return 0;
}

