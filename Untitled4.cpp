#include<stdio.h>
int main(){
	int note;
	printf("entre note:");
	scanf("%d", &note);
	(note<10)? printf("non valide"): printf ("bien");
	return 0;

}
