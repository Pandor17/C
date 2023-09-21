#include<stdio.h>
int main(){
    int in1; //Número menor
    int in2; //número mayor
    printf("Ingrese dos números enteros para buscar números primos:\n");
    scanf("%i %i",&in1,&in2);
    if (in1>in2) // me aseguro de que n1 siempre es el menor
    {   int variablechocha = in1;
        in1=in2;
        in2=variablechocha;}
    for (in1; in1<=in2; in1++) //bucle para que compruebe todos los números entre n1 y n2
    {   int idivisor=1;
        int isuma=0;
        for (idivisor; idivisor<in1; idivisor++) //bucle para comprobar si es primo
        { 
            if(in1%idivisor==0){
                isuma++;
            } 
            if(isuma == 2){
                break;
            }
        }
        if(isuma == 1){ //si solo se divide entre 1 y sí mismo, imprimo
            printf ("%i\n",in1); } }
    return 0;}