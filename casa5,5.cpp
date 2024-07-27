#include<stdio.h>
int main (){
	
	int a, c, i;
	
	printf("entre le nombre: ");
	scanf("%d", &a);
	printf("entre dos\n");
	
			
		
	if(a%2==0){
		c=a/2;	
		a=c;
		for(i=1; i<a; i++){
			printf("%d\n", c);
	}
			
}
	return 0;
	
}
