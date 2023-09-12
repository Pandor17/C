//Determinar si un número es par o impar

#include <stdio.h>

int main()
{
    int iValor;
    printf("Indique su número: "); 
    scanf("%i", &iValor);

    if(iValor%2 == 0){
        printf("Su número es par");
    }

     else {
        printf("Su número es impar");
    }
    
   return 0;
}