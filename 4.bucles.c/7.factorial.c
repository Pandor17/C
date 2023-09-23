#include <stdio.h>

int main(){
    
    int iNumero, iResultado=1;
    printf("Insert a number cualquiera\n");
    scanf("%i",&iNumero);

    for (int iConteo = 1; iConteo<=iNumero; iConteo++)
    {
        iResultado=iResultado*iConteo;
    }
    
    printf("El resultado de %i factorial es: %i.",iNumero,iResultado);
    return 0;
}