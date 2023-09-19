#include <stdio.h>
int main(){
    int n, m, suma=0;
    printf("Indique 2 números enteros:\n");
    scanf("%i %i",&n,&m);
    
    if(n>m){
        m++;
        while(n>m){
            if(m%2==0){
                suma+=m;    
            }
            m++;
            
        }  
        printf("El valor de la suma es: %i",suma); 
    }
    else if(m>n){
        n++;
        while(m>n){
            if(n%2==0){
                suma+=n;
            }  
            n++;          
        }  
        printf("El valor de la suma es: %i",suma); 
    }
    else{
        printf("Ambos números son iguales, la suma vale 0.");
    }
    return 0;
}