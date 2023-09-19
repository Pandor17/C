#include <stdio.h>

int main(){
    int iN, iConteo=1, iOperación=1;
    printf("Escriba un número para sumar o multiplicar los 10 primeros números:\n");
    scanf("%i",&iN);

    if(iN>10){ /*Multiplicación*/
        while (iConteo<11){
            iOperación = iOperación*iConteo;
            iConteo++;
        }
        printf("%i",iOperación);
    }
    else{/*Suma*/
        iOperación--;
        iConteo--;
        while (iConteo<11){
            iOperación=iOperación+iConteo;
            iConteo++;
        }
        printf("%i",iOperación);
    }
    
    return 0;
}