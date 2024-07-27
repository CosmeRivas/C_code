#include <stdio.h>
#include <math.h>

int main() {
	float r, C, S;
	printf("Entrer le rayon : ");
	scanf("%f",&r);
	C = 2*M_PI*r;
	S = M_PI*r*r;
	printf("La circonférence est : %.2f\n", C);
	printf("La surface est : %.2f\n", S);
	return 0;
} 
