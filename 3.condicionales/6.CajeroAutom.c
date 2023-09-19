#include <stdio.h>

int main(){
    int iOpción;
    float fSaldo=1500, fingresar, fretirar;
    printf("\tBienvenido:\nElija la opción que desea realizar:\n1.Ingresar\n2.Retirar\n3.Salir\n");
    scanf("%i",&iOpción);
    
    switch(iOpción){
        case 1:printf("Teclee la cantidad a ingresar: ");
            scanf("%f",&fingresar);
            fSaldo+=fingresar;
            printf("Operación realizada con éxito.\nSaldo actual: %.2f",fSaldo);
            break;
        case 2:printf("Teclee la cantidad a retirar: ");
            scanf("%f",&fretirar);
            if(fretirar<=fSaldo){
                fSaldo-=fretirar;
                printf("Operación realizada con éxito.\nSaldo actual: %.2f",fSaldo);
            }
            else{
                printf("Saldo insuficiente");
            }
            break;
        case 3: ;
            break;
        default: printf("Opción no disponible");
            break;
    }

    return 0;
}