#include<stdio.h>
int main(){
	int n, i, m;
	
	printf("Entrer une valeur n :");
	scanf("%d", &n);
	m=1;
	i=1;
	while(i<=n){
		i++;
		m*=i;
		printf("%d", m);
	}
	return 0;
}
