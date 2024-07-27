#include<stdio.h>
#include<string>
int main(){
	int a,d;
	char b, c;
	printf("cuanto tiempo has estudiado ayer?: ");
	scanf("%d", &a);
	printf("has estudiado arabe?: ");
	scanf("%s", b);
	printf("sigues haciendo ejercicio ?: ");
	scanf("%s", c);
	if(a<15)
		printf("tienes que esforzarte mas, no es suficiente. Recuerda porque estas aqui \n");
	else
		printf("lo estas haciendo bien, tienes que hacerlo por ella \n");
	if(b=='no')
		printf("RIVAS debes trabajar mas duro, que sino no llegaras al objetivo \n");
	else
		printf("sigue asi, lo vas a lograr muy pronto, te quedan 2 \n");
	if(c=='no')
		printf("cuida de ti que nadie mas lo hara por ti\n");
	else
		printf("perfecto hacer ejercicio es la prueba exacta que estas cuidando de ti\n");
	
	
	printf("y no olvides aprender algo nuevo hoy y comer sano, te hara bien\n");
	return 0;
}
