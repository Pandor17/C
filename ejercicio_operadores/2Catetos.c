/*Librerias*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Programa principal*/
int main()
{
    /*Declaración de Variables*/
    float fCateto1 = 0;
    float fCateto2 = 0;

   
    /*Introducción de valores*/
    printf("Introduzca el valor del Cateto 1:\n");
    scanf("%f", &fCateto1);

    printf("Introduzca el valor del cateto 2:\n");
    scanf("%f", &fCateto2);

    /*Cálculo Hipotenusa*/
    float fHipotenusa = sqrt((fCateto1*fCateto1)+(fCateto2*fCateto2));
    printf("El valor de la hipotenusa es:\n %f", fHipotenusa);
   
    return 0;
}

