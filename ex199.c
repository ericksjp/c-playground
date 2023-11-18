/* 
    199. Escreva um programa que leia três números inteiros e calcule a sua média aritmética. 
    O cálculo da média deve ser realizad o atrav és de um subprograma.  
*/
#include <stdio.h>

float media (int n1, int n2, int n3){

    int soma = n1+n2+n3;
    float media = (float)soma/3.0;
    return media;
}

int main()
{

    int vetor[3];
    for (int c = 0; c<3; c++){
        printf("Informe o %d numero -> ",c);
        scanf("%d",&vetor[c]);
    }

    //printf("%d\n",vetor[0]);

    float media_aritmetica = media(vetor[0],vetor[1],vetor[2]);

    printf("A media aritmetica eh: %f",media_aritmetica);
    return 0;


}
