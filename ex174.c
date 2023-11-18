/* 
    174. Escreva um programa que leia um vetor de dez números reais  (centrado na orig em 
    do plano cartesiano)  e calcule o valor do seu módulo. O módulo de  um vetor u = (x 1, 
    x2, ..., x N) é calculado através da fórmula abaixo.  
*/
#include <stdio.h>

#include <math.h>

int main()
{
    
    int vetor[10];
    float somador = 0;

    for (int c = 0; c<10; c++){
        int num;
        printf("Informe o %d numero do vetor: ",c+1);
        scanf("%d",&num);
        num = num*num;
        vetor[c] = num;
        somador += vetor[c];
    }
    somador = sqrt(somador);
    printf("\nModulo do vetor informado: %f",somador);
    return 0;
}



