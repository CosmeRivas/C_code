 #include<stdio.h>
int main(){
	int i,j;
	//boucle ext�rieure
	for (i = 1; i<=2; ++i){
		printf("boucleExt: %d\n", i);
		
		//boucle int�rieure
		for (j=1; j<=3; ++j){
		printf("boucleInt: %d\n", j);	
		}
	}
	return 0;
}
