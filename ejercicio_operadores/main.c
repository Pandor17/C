#include <stdio.h>

int main() 
{
    int iCaquitas = 17000000;
    int iAntonios = 8;
    int iSuma = iCaquitas + iAntonios;
    int iResta = iCaquitas - iAntonios;
    float fDivisión = iCaquitas / iAntonios;
    int iResto = iCaquitas % iAntonios;
    int iMultiplicación = iCaquitas * iAntonios;
    printf("%d\n%d\n%d\n%d\n%f\ntopota", iSuma, iResta, iResto, iMultiplicación, fDivisión);
    return 0;
}