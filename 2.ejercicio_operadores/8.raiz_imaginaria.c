#include <stdio.h> <math.h>

int main(){
    float fN1;
    
    printf("Escriba un número para calcular su raiz cuadrada:\n");
    scanf("%f",&fN1);
    
    if(fN1>=0){
       float fRaiz = sqrt(fN1);
       printf("La raíz de %.2f es %.2f",fN1,fRaiz);
    }
    else{
       float fRaiz = sqrt(-fN1);
       printf("la raíz de %.2f es un número imaginario: %.2fi",fN1,fRaiz);
    }
    return 0;
}
/*Dudita; aquí quise declarar las variables al principio, y solo en el caso de que fuera negativo, decirle, oye, que ahora fN1 = -fN1 
pero no me hiso casito*/
