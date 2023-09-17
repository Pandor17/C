//Expresar si el alumno esta aprobado o suspenso
//Recomiendo preguntar si un 4.99999 estaría aprobado o no

#include <stdio.h>

int main()
{
   float fNota;
   
   printf("Introduzca su nota:\n");
   scanf("%f", &fNota);

   if(fNota >=5){
    printf("Aprobado");
   }
   else{
    printf("Suspenso");
   }
   
   
   return 0;
}