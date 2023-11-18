/* 
    148. Escreva um programa que permita que o usuário jogue o jogo do “arrochado”. Neste 
    jogo, o programa gera um número aleatório entre 1 e 100 e o usuário deve 
    “arrochar” o númer o gerado pelo computador. A cada jogada, os limites do jogo vão 
    se estreitando de acordo com os valores digitados pelo usuário. O jogo acaba quando 
    o usuário consegue imprensar o número gerado pelo computador (neste caso ele 
    ganha) ou quando o usuár io entr a com o número gerado pelo computador (neste 
    caso ele perde). Em pascal, u se a função random ou randomize para a geração de 
    números aleatórios.  
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));

    int a = (rand() % 99)+ 1;
    printf("O computador gerou um numero entre 1 e 100! Tente adivinhar o intervalo exato em que ele esta inserido!\nEx: Se o numero gerado for 7, o comeco do seu intevalo eh 6 e o final do seu intervalo eh 8.\n\n");

    int comeco,fim;

    while (1){
        printf("Comeco do intervalo -> ");
        scanf("%d",&comeco);
        printf("Fim do intervalo    -> ");
        scanf("%d",&fim);

        if (a-comeco==1 && fim-a==1){
            printf("\nParabens, o numero gerado foi %d que esta exatamente entre %d e %d. YOU WON!\n\n %d - %d - %d",a,comeco,fim,comeco,a,fim);
            return 0;
            exit(0);
        }

        if (a>comeco && a<fim){
            printf("\nO numero esta entre %d e %d! Continue tentando, voce esta chegando perto!\n\n",comeco,fim);
        } else{
            printf("\nO numero era %d que nao esta entre %d e %d. YOU LOSE!\n",a,comeco,fim);
            printf("Resposta correta -> Comeco = %d / Fim = %d\n",a-1,a+1);
            return 0;
            exit(0);
        }
    }
}
