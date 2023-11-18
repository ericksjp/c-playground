/* 
    51. Carlos chegou ao aeroporto para fazer o check -in do seu vôo. Ao entrar na fila de 
    passageiros, ele percebeu que a empresa aérea tinha 5 guichês para fazer o check -in 
    dos passageiros, e que estes guichês eram n umerado s de 1 a 5. Considerando que os 
    guichês iam começar a realização dos check -ins no exato momento em que Carlos 
    entrou na fila, e que cada check -in é realizado em exatamente 15 minutos, escreva um 
    programa que leia um número inteiro positivo que corre sponde à posição de Carlos na 
    fila e determine o número do guichê no qual ele será atendido  e o tempo que ele vai 
    ter que esperar para ser atendido .  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe051 >>>\n\n");
    int posicao,guiche,pessoas,tempo_espera;
    printf("Posicao de carlos na fila: ");
    scanf("%d",&posicao);

    guiche =(posicao-1)%5;
    tempo_espera = (posicao/5)*15;

    printf("Carlos vai ser atendido no guiche: %d\n",guiche+1);
    printf("Tempo de espera: %d minutos.\n",tempo_espera);
    return 0;
}
