 #include<stdio.h>
int main(){
	int i,j;
	//boucle extérieure
	for (i = 1; i<=2; ++i){
		printf("boucleExt: %d\n", i);
		
		//boucle intérieure
		for (j=1; j<=3; ++j){
		printf("boucleInt: %d\n", j);	
		}
	}
	return 0;
}
