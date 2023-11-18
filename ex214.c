/* 
    214. Em um determinado concurso público, par a cada questão que um candidato acerta 
    ele ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada 
    questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um 
    programa que leia o número de questões que um candidato ac ertou, o número de 
    questões que ele errou e o número de questões que ele deixou em branco e 
    determine a sua pontuação final. A pontuação deve ser calculada através de um 
    subprograma, que deve receber como entrada o número de questões certas, o 
    número de qu estões erradas e o número de questões em branco.  
*/
#include <stdio.h>

int pontuacao(int acertos, int erros, int brancos) {
    return (acertos * 5) - (erros * 3) - (brancos * 0);
}

int main(){
    int acertos, erros, brancos;
    printf("Informe a quantidade de acertos do candidato: ");
    scanf("%d", &acertos);
    printf("Informe a quantidade de erros do candidato: ");
    scanf("%d", &erros);
    printf("Informe a quantidade de brancos do candidato: ");
    scanf("%d", &brancos);

    int pont = pontuacao(acertos, erros, brancos);

    printf("Pontuacao do candidato: %d\n", pont);

    return 0;
}