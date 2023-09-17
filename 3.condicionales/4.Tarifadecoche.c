#include <stdio.h>

int main(){
    char cVehículo;
    printf("Indique el tipo de vehículo: coche/moto/autobús\n");
    scanf("%c",&cVehículo);

    switch(cVehículo){
        case 'c': printf("la tarifa es 500$");
        break;
        case 'm': printf("la tarifa es 300$");
        break;
        case 'a': printf("la tarifa es 800$");
        break;
        default: printf("el vehiculo introducido no está entre las opciones");
        break;

    }
    return 0;
}