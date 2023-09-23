#include <stdio.h>

int main (){
    char cOpcion;
    do
    {
       fflush(stdin);
       printf("HOLA.\nPulse 1 para volver a saludar\n");
       scanf("%c",&cOpcion);
    } while (cOpcion == '1');
    
    


    return 0;
}