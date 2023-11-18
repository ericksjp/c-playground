/* 
    154. Escreva um programa que leia dez números inteiros e, após finalizar a leitura, 
    impri ma todo s os números lidos na ordem inversa em que eles foram digitados.  
*/
#include <stdio.h>
#define QUANTIDADE 10

int main()
{
    int vetor [QUANTIDADE]; int c = 0;
    while(c<QUANTIDADE){
        int num;
        printf("Informe um numero inteiro: ");
        scanf("%d",&num);
        vetor[c]=num;
        c++;
    }
    printf("\n");
    for (c=QUANTIDADE-1; c>=0; c--){
        printf("%d - ",vetor[c]);
    }
    return 0;
}
