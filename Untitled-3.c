#include<stdio.h>
#include<math.h>

int main(){
    float note;
    
    printf("Entrer note : ");
    scanf("%f", &note);

    if ( note >= 16 && note <= 20){
    	printf("Mention : Très Bien");
    }
    else if ( note >= 14 && note < 16){
    	printf("Mention : Bien");
    }
    else if ( note >= 12 && note < 14){
    	printf("Mention : Assez Bien");
    }
    else if ( note >= 10 && note < 12 ){
    	printf("Mention : Passable");
    }
    else {
    	printf("Mention : Faible");
    }
    
    return 0;
}