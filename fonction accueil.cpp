#include<stdio.h>
int Accueil(){
	char nom[10];
	char prenom[10];
	int age[10];
	
	printf("entre votre nom: ");
	scanf("%s", nom);
	printf("entre votre prenom: ");
	scanf("%s", prenom);
	printf("entre votre age: ");
	scanf("%d", &age);
	
	printf("bienvenue %s %s votre age est:%d\n, nom, prenom, age");
	
}
int main(){
	Accueil;
	return 0;
}
