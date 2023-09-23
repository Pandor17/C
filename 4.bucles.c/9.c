//Programa que sume todos los pares desde 1 hasta n, y diga cuantos números ha sumado

#include <stdio.h>
int main(){
    int iN, iSumaTotal=0, iNúmerodecifras=0;
    printf("ingrese un número:\n");
    scanf("%i",&iN);

    for (int iContador = 1; iContador <= iN; iContador++){
        if (iContador%2==0){
            iSumaTotal +=iContador;
            iNúmerodecifras++;
        }
    }
    printf("La suma total es %i, y se han sumado %i cifras.",iSumaTotal,iNúmerodecifras);

    return 0;
}