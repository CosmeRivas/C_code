#include<stdio.h>
int main (){
	
	int m[5][4]={{1,2,3,4},
				{7,0,3,2},
				{5,2,6,4},
				{1,2,3,4},
				{2,6,2,8}};
	int n[5][4]={{1,2,3,4},
				{7,0,3,2}, 
				{0,2,6,4}, 
				{1,2,3,4},
				{2,6,2,0}};
	int s[5][4]={{0,0,0,0},
				{0,0,0,0},
				{0,0,0,0},
				{0,0,0,0},
				{0,0,0,0}};
	int i, j;
	for(i=0; i<5; i++){
		for(j=0; j<4; j++){
			printf("s[%d][%d]=%d\t", i,j,s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
