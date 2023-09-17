#include <stdio.h>

int main(){
    char cNota;
    printf("Introduzca la nota obtenida: a, b, c, d o f.\n");
    scanf("%c",&cNota);

    switch(cNota){
    case 'a': printf("Sobresaliente");
        break;
    case 'b': printf("Notable");
        break;
    case 'c': printf("Aprobado");
        break;
    case 'd': printf("Suspenso");
        break;
    case 'f': printf("Suspenso");
        break;

    default: printf("se equivocó al introducir la nota.");
        break;
    }

    
    return 0;
}