//Calcular cuanto debes pagar de tarifa según tramos

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TARIFA1 1.2
#define TARIFA2 1
#define Tarifa3 0.8

int main()
{
    float fConsumo, fFactura;
    printf("Indique su consumo: "); scanf("%f", &fConsumo);

    if(fConsumo < 1000){
        fFactura = TARIFA1*fConsumo;
    }
     else if(fConsumo >= 1000 && fConsumo < 1850){
        fFactura = TARIFA2*fConsumo;
    }
     else if(fConsumo>= 1850){
        fFactura = Tarifa3*fConsumo;
    }

    printf("Su factura es de: %.2f euros",fFactura);
   return 0;
}