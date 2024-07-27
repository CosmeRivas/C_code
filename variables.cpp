#include<stdio.h>
int main(){
int x, y;
float zl, z2;

x = 5;
y = 3;

printf("x*y = %d\n", x * y );//produid
printf("x-y = %d\n", x - y);//soustraction
printf("x/y = %d\n", x / y);//division entiere
z1 = x / y;// division
z2 = (float)x / (float)y; // division
printf("z1 = %f \t z2 = %f\n", z1, z2);
printf("x mod y = %d", x%y);
return 0;
}
