#include <stdio.h>

int iFactorial (int iNumero){
    int iResultado = 1;
    for (int iConteo = 1; iConteo<=iNumero; iConteo++){
        iResultado=iResultado*iConteo;
    }
    return iResultado;
}

int main(){
    int iNumero;
    printf("Insert a number cualquiera\n");
    scanf("%i",&iNumero);
    printf("El resultado de %i factorial es: %i.",iNumero,iFactorial(iNumero));
    return 0;
}

