#include <stdio.h>

int main(){
    int iN; //Número de veces que se ponen los *
    int iConteo;

    printf("Escriba un número para hacer un arbolito:\n");
    scanf("%i",&iN);

    for (iConteo = 1; iConteo <= iN; iConteo++){
        for(int i = iConteo-1; i < iN; i++){
            printf(" ");
        }
        for(int j = 0; j < iConteo + iConteo - 1; j++){
            printf("*");
        }        
        printf("\n");
    }
    
    
    return 0;
}