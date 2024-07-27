#include<stdio.h>
int main ( ) {
 int x = 5 , y = 3 ;
 float z1 , z2 ;
 printf( "x+y = %d\n" , x + y );
 printf("x*y = %d\n" , x * y ); 
 printf( "x-y = %d\n" , x - y ); 
 printf( "x/y = %d\n" , x / y ); 
 z1 = x / y ; 
 z2 = ( float) x / ( float ) y ; 
 printf( "z1 = %f \ t z2 = %f \n" , z1 , z2 ) ;
 printf( "x mod y = %d\n" , x%y ) ;  

 return 0 ;
 
 }
