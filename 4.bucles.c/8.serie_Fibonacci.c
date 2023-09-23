#include <stdio.h>

int main(){
    int iContador,iNumero,iSuma=0,iSumaNueva=1,iSolucion;
    printf("indique el número de términos que desea calcular:\n");
    scanf("%i",&iNumero);
   
    printf("%i\n",iSuma);
    printf("%i\n",iSumaNueva);

    for(iContador=0; iContador<iNumero-1;iContador++){
        iSolucion=iSuma+iSumaNueva;
        printf("%i\n",iSolucion);

        iSuma=iSumaNueva;
        iSumaNueva=iSolucion; 
    }
    return 0;
}