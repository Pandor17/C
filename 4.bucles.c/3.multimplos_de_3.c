#include <stdio.h>
int main(){
    int iMultiplo, iConteo=1, iN;
    printf("Indique cuantos multiplos de tres desea obtener:\n");
    scanf("%i",&iN);
    while (iConteo<=iN)
    {
        iMultiplo=iConteo*3;
        printf("%i,",iMultiplo);
        iConteo++;
    }
    

    return 0;
}