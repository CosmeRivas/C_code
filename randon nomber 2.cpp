#include <stdio.h> /* Declaraci�n librer�as*/
#include <stdlib.h>
#include <time.h> /* Nueva librer�a necesaria para la funci�n srand */

int main() {
	int numero; //Variable donde se guardar� nuestro numero aleatorio
	
	srand(time(NULL)); //Generamos numero aleatorio en base al tiempo
	numero=rand() % 11; //Le indicamos que el numero ser� entre 0-10
	
	printf("%d",numero); //Mostramos el resultado
	return 0;
}
