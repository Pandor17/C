#include <stdio.h>

int main(){
    char cNombre[30];
    char cSexo[30];
    int iEdad;

    printf("Ingrese su nombre:\n");
    gets(cNombre);
    
    printf("Ingrese edad:\n");
    scanf("%i%*c",&iEdad);

    printf("Ingrese su sexo:\n");
    gets(cSexo);

   printf("Sus datos son: %s, %i, %s\n",cNombre,iEdad,cSexo);
    if((strcmp(cSexo, "hombre")==0)&&(iEdad>=18)){
        printf("Eres un machista");
    }
    return 0;
}


/*Expresión para descartar el espacio en scanf
%*c
Expresión para leer frases con scanf
scanf ("%[^\n]%*c", ch);
*/