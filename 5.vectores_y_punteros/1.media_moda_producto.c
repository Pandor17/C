/*pedir el tamaño y el contenido de dos vectores
hacer un menú para elegir operación
- media
- moda
- producto vectorial
resolver cada tipo por funciones diferentes
hacer un do while para volver al inicio*/

#include <stdio.h>

/*int moda(){
    return 0;
}*/

float fCalcularMedia(int* pxiVector, int iTamano){
    float fSuma = 0;
    float fMedia = 0;
    for (int i = 0; i < iTamano; i++){
        fSuma += pxiVector[i];
    }
    fMedia = fSuma/iTamano;
    return fMedia;
}

float fCalculoProductoEscalar(int* pxiVector1, int iTamano1, int* pxiVector2, int iTamano2){
    float fProductoEscalar = 0;
    for (int i = 0; i < iTamano1; i++)
    {
        fProductoEscalar += pxiVector1[i]*pxiVector2[i];
    }
    
    return fProductoEscalar;
}

int main(){ //Tamaño y contenido Vectores
    int iTamano1;
    int iTamano2;
    printf("Indique el tamaño de sus dos vectores:\n");
    scanf("%i %i",&iTamano1,&iTamano2);
    int iVector1[iTamano1];
    int iVector2[iTamano2];
    printf("Digite los números del primer vector, tras cada cifra, pulse intro\n");
    for (int i = 0; i < iTamano1; i++){
        scanf("%d",&iVector1[i]);
    }
    printf("Digite los números del segundo vector, tras cada cifra, pulse intro\n");
    for (int i = 0; i < iTamano2; i++) {
        scanf("%d",&iVector2[i]);
    }

    //Hacer menú
    int iOpcion;
    int iVuelta;
    float fMedia;
    do {
        fflush(stdin);
        printf("Elija la opción que desea realizar:\n1 Media\n2 Moda\n3 Producto Escalar\n4 Producto Vectorial\n");
        scanf("%i",&iOpcion);
        switch (iOpcion){
        case 1:/*Media*/
            fMedia = fCalcularMedia(iVector1, iTamano1);
            printf("La media del primer vector es: %.2f\n",fMedia);
            fMedia = fCalcularMedia(iVector2, iTamano2);
            printf("La media del segundo vector es: %.2f\n",fMedia);
            printf("Pulse 1 para volver a iniciar el menú.\n");
            scanf("%i",&iVuelta);
            break;
        case 2://moda
            printf("Esta opción ya no está disponible. Sentimos las molestias.\nPulse 1 para volver a iniciar el menú.\n");
            scanf("%i",&iVuelta);
            
            break;
        case 3: //producto escalar
            float fProductoEscalar;
            if (iTamano1 == iTamano2) {
                fProductoEscalar = fCalculoProductoEscalar(iVector1, iTamano1, iVector2, iTamano2);
                printf("El producto escalar de ambos vectores es %.2f\n",fProductoEscalar);
                }
            else {
                printf("Para calcular el producto vectorial ambos vectores deben tener el mismo tamaño.\n");
                }
            printf("Pulse 1 para volver a iniciar el menú.\n");
            scanf("%i",&iVuelta);
            break;
        case 4: //producto vectorial
            printf("Pulse 1 para volver a iniciar el menú.\n");
            scanf("%i",&iVuelta);
            break;
        default:
            printf("El número seleccionado no es una opción.\nPulse 1 para volver a iniciar el menú.\n");
            scanf("%i",&iVuelta);
            break;
        }
    } while (iVuelta == 1);
    

    //printf("%i, %i, %i\n",iVector1[1],iVector1[2],iVector1[3]);
    return 0; 
}