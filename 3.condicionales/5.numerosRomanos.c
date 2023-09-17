#include <stdio.h>

int main(){
    int iNumero, iunidades, idecenas, icentenas, imillar;
    printf("Introduzca el número que desea convertir a número romano\n");
    scanf("%i",&iNumero);
    iunidades=iNumero%10; iNumero=iNumero/10;
    idecenas=iNumero%10; iNumero=iNumero/10;
    icentenas=iNumero%10; iNumero=iNumero/10;
    imillar=iNumero%10; iNumero=iNumero/10;
    
    printf("unidades:%i, decenas:%i, centenas:%i, millar: %i\n",iunidades,idecenas,icentenas,imillar);

    switch (imillar)
    {
        case 1:printf("M");break;
        case 2:printf("MM");break;
        case 3:printf("MMM");break;
        default:printf("unidades de millar incorrectas\n");
    }
    switch (icentenas)
    {
        case 1:printf("C");break;
        case 2:printf("CC");break;
        case 3:printf("CCC");break;
        case 4:printf("CD");break;
        case 5:printf("D");break;
        case 6:printf("DC");break;
        case 7:printf("DCC");break;
        case 8:printf("DCCC");break;
        case 9:printf("CM");break;
    }
    switch (idecenas)
    {
        case 1:printf("X");break;
        case 2:printf("XX");break;
        case 3:printf("XXX");break;
        case 4:printf("XL");break;
        case 5:printf("L");break;
        case 6:printf("LX");break;
        case 7:printf("LXX");break;
        case 8:printf("LXXX");break;
        case 9:printf("XC");break;
    }
    switch (iunidades)
    {
        case 1:printf("I");break;
        case 2:printf("II");break;
        case 3:printf("III");break;
        case 4:printf("IV");break;
        case 5:printf("V");break;
        case 6:printf("VI");break;
        case 7:printf("VII");break;
        case 8:printf("VIII");break;
        case 9:printf("IX");break;
    }
    return 0;
}