/*
    31. Em um determinado concurso público, para cada questão que um candidato acerta ele 
    ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada 
    questão  que el e deixa em branco ele não ganha e nem perde pontos. Escreva um 
    programa que leia o número de questões que um candidato acertou, o número de 
    questões que ele errou e o número de questões que ele deixou em branco e 
    determine a sua pontuação final.  
*/
#include <stdio.h>
const int pont_acerto = 5;
const int pont_erro = 3;

int main()
{
    
    printf("<<< exe031 >>>\n\n");

    int acertos,erros,nulas;

    printf("Informe a quantidade de acertos: ");
    scanf("%d",&acertos);
    printf("Informe a quantidade de erros: ");
    scanf("%d",&erros);

    int pontuacao = (acertos*pont_acerto)-(erros*pont_erro);

    printf("Pontuacao do candidato: %d",pontuacao);
    return 0;
}
