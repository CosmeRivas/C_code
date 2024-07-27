#include<stdio.h>
float*cercle(float r ){
	static float T[2];
	T[0]=2*M_PI*r;
	T[1]=M_PI*Puissance(r, 2);
	return T;
}

int maint (){
	//ex6
	float *T2;
	T2+cercle(4);
	printf("circonfernce =%.2f\n, T2[0]");
	prnintf("surface=%.2f\n", T2[1]);
	return 0;
}
