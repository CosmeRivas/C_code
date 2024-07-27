#include<stdio.h>
#include<string.h>
int main(){
	
	char a[14];
	char t[1];
	int i,j,m=0;
	printf("introduce tu oracion: ");
	scanf("%s", a);
	printf("que palabra deseas eliminar?: ");
	scanf("%s", t);
	for(i=0; i<strlen(a); i++){
		m=m+1;
		if (a[i]=='t');
		printf("%c",t[i]);
		break;
	printf("%d", m);	
		
	}
	return 0;
}
