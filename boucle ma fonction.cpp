#include<stdio.h>
void RIVAS (int t[10]) {
	int i;
	for(i=0; i<10; i++){
			printf("t[%d]=%d\n", i, t[i]);	
	}
	
}
	
int main (){
	int t2[10]={8,20,4, 5, 11, 1, 2, 41, 6, 10};
	int t3[10]={18,20,4, 50, 11, 1, 2, 41, 6, 10};
	RIVAS(t2);
	printf("table t3\n");
    RIVAS(t3);
	return 0;
}
