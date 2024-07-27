#include <stdio.h>
int main() {
char nom[10];
char prenom[10];
printf("Entrer votre nom et votre prenom : ");
scanf("%s%s", nom, prenom);
printf("Bonjour : %s %s", nom, prenom);
return 0;
}	
