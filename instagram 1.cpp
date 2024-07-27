#include<iostream>
void pintInvTriangle(int n){
	for (int i=0; i<n; i++){
		int space=i;
		for(int j=0; j<2*n-i-1; j++){
			if (space){
				std::cout<<" ";
				space--;
				
			}
			else {
				std ::cout<< "* ";
				
			}
		}
		
	}
}
int main(){
	printInvTriangle(10);
	return 0;
}
