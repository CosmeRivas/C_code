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
	scanf("%d", age);
	printf("bienvenue %s %s votre age est:%d\n, nom, prenom, age");
	
}
int Test(int x, int y){
	if(x>y)
		return 1;
	else if(x==y)
		return 0;
	return -1;
}
int main(){
	int t;
	t=Test(4,4);
	printf("%d", t);
	Accueil;
	return 0;
}
