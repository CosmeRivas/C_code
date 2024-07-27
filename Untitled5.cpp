#include<stdio.h>
int maint(){
	int note;
	printf("entre une lettre:");
	scanf("%c", &note);
	switch (note){
		case 'a':
			printf("c est la lettre a ");
			break;
			case 'b' :
				printf("cest la lettre b");
				break;
				case 'c':
					printf("cest la lettre c");
					break;
					default:
						printf("'c' est autre lettre");
						
	}
	return 0;
}
