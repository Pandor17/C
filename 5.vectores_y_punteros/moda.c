#include <stdio.h>

struct sDatosModa
{
    int iFrecuencia;
    int iValor;
};


int main(){
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
    
    struct sDatosModa xsVectorModas[iTamano1];
    
    int iFrecuencia=0;
    int iFrecuenciaMaxima=0;
    for (int ix = 0; ix < iTamano1; ix++){
        for (int iy = 0; iy < iTamano1; iy++){
            if (iVector1[ix]==iVector1[iy]){
                iFrecuencia ++;
            }   
        }        
        
        if (iFrecuencia >= iFrecuenciaMaxima){
            iFrecuenciaMaxima = iFrecuencia;
           
        }
        int iEncontrado = 0;
        for(int iz = 0; iz < iTamano1; iz++){
            if(xsVectorModas[iz].iValor == iVector1[ix]){
                iEncontrado = 1;
                break;
            }
        }
        if(iEncontrado == 0){
            xsVectorModas[ix].iFrecuencia = iFrecuencia;
            xsVectorModas[ix].iValor = iVector1[ix];
        }        
        iFrecuencia = 0;
    }
    for(int ix = 0; ix < iTamano1; ix++){
        if(xsVectorModas[ix].iFrecuencia == iFrecuenciaMaxima){
            printf("Moda: %d\n", xsVectorModas[ix].iValor);
        }
    }

    return 0;
}