/*Inserto librerias*/
#include <stdio.h>
#include <stdbool.h>

bool bCompruebaMayorDeEdad(int iEdad);

/*Programa principal*/
int main()
{
    bool bMayorDeEdad = false;
    int iEdad = 0;
    printf("Introduzca una edad\n");
    scanf("%d", &iEdad);   
    bMayorDeEdad = bCompruebaMayorDeEdad(iEdad);
    if(bMayorDeEdad){
        printf("Es mayor de edad");
    }
    else{
        printf("Es menor de edad");
    }
    
    return 0;
}

bool bCompruebaMayorDeEdad(int iEdad){
    if(iEdad >= 18){
        return true;
    }   
    else{
        return false;
    }
}