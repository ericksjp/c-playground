/* 
    159. Escreva um programa que leia um vetor de 10 números inteiros e dois números 
    inteiros M e N entre 1 e 10 e inverta os elementos que ocupam as posições M e N do 
    vetor.  O programa deve também imprimir o estado do veto r antes e após a inversão.  
*/
#include <stdio.h>
#define QUANTIDADE 10

int main()
{
    int vetor[10]; int c = 0;
    while(c<QUANTIDADE){
        int num;
        printf("Informe um numero inteiro: ");
        scanf("%d",&num);
        vetor[c]=num;
        c++;
    }

    c=0;
    while(c<QUANTIDADE){
        printf("%d - ",vetor[c]);
        c++;
    }

    int m,n;
    printf("\nAgora, informe os indices dos numeros que quer trocar de posicao: ");
    scanf("%d %d",&n,&m);

    int holder = vetor[n];
    vetor[n] = vetor[m];
    vetor[m] = holder;

    c=0;
    while(c<QUANTIDADE){
        printf("%d - ",vetor[c]);
        c++;
    }
    return 0;
}
