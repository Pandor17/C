#include <stdio.h>
#include <stdlib.h>

int main(){
    char cTecla[2];
    printf("pultse la tecla 1 para borrar pantalla:\n");
    scanf("%c",&cTecla);

    if(strcmp(cTecla, "1")==0){
        system ("cls");
    }
    else{
        printf("ha pulsado %c:\n",cTecla);
        printf("tecla incorrecta, reinicie el programa");
    }

    return 0;
}