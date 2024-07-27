#include<stdio.h>
int main (){
	
	int a, c, i;
	
	printf("entre le nombre: ");
	scanf("%d", &a);

	//entre dos 
	
	for(i=1; i<a; i++){
					
		if(a%2==0){
			c=a/2;	
			a=c;
			printf("%d\n", c);
	}
		
}
	//entre 3
	
	if(a%3==0){
		
		for(i=1; i<a; i++){
	
			if(a%3==0){
			c=a/3;	
			a=c;
		
			printf("%d\n", c);
		}
	}
		
}
	//entre 5
	
	
	if(a%5==0){
		for(i=1; i<a; i++){
	
			if(a%5==0){
				c=a/5;	
				a=c;
		
				printf("%d\n", c);
					break;
		}
	}	
}
	//ente 7
	

	
	if(a%7==0){
		
		for(i=1; i<a; i++){
	
			if(a%7==0){
			c=a/7;	
			a=c;
		
			printf("%d\n", c);
		}
	}
		
}

	
	//11
	if(a%11==0){
		for(i=1; i<a; i++){
	
			if(a%11==0){
				c=a/11;	
				a=c;
		
				printf("%d\n", c);
		}
	}
		
}
	else{
		
		printf("le nombre est prime");
}
	return 0;
	
}
