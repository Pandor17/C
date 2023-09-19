#include <stdio.h>
int main(){
    int iMultiplo, iConteo=1, iN;
    printf("Indique hasta que número desea buscar multiplos de 5:\n");
    scanf("%i",&iN);
    
    while (iConteo<=iN)
    {
        if(iConteo%5==0){
            printf("%i",iConteo);
            if(iConteo<iN){
                printf(",");
            }
        }
        iConteo++;
    }

    return 0;
}