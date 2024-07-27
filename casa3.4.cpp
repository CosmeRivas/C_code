#include<stdio.h>
int main() {
	int a, b, c;
	printf("Entrer les 3 entiers a, b et c : ");
	scanf("%d%d%d", &a, &b, &c);
	printf("La somme est : %d", a+b+c);
	printf("La produit est : %d", a*b*c);
	printf("La moyenne est : %f", ((float)a+(float)b+(float)c)/3);
	return 0;
} 
