/*Inserto librerias*/
#include <stdio.h>

/*Programa principal*/
int main()
{
    /*Nombro variables*/
    float Base1 = 0;
    float Base2 = 0;
    float Altura = 0;
    float Area = 0;

    /*Introducción de valores*/
    printf("Introduzca el valor de la Base Mayor\n");
    scanf("%f", &Base1);

    printf("Introduzca el valor de la Base menor\n");
    scanf("%f", &Base2);

    printf("Introduzca el valor de la altura\n");
    scanf("%f", &Altura);

    /*Cálculo del área*/
    Area = ((Base1+Base2)/2)*Altura;
    printf("El valor del Área es:\n %f", Area);
    return 0;
}

