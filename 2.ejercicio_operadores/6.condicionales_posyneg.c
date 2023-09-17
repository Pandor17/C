//indicar si un número es positivo o negativo

#include <stdio.h>

int main()
{
   float fValor;
   
   printf("Introduzca su número:\n");
   scanf("%f", &fValor);

   if(fValor>0){
    printf("Positivo");
   }
   else if(fValor<0){
    printf("Negativo");
   }
   else{
    printf("Neutro");
   }
   
   
   return 0;
}