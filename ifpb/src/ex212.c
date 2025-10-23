/* 
    212. Escreva um programa que leia o número total de questões existentes em uma prova 
    e o número de questões que um candidato acertou e determine o seu percentual de acertos e o seu p ercentual de erros. O cálculo deve ser realizado através de um 
    subprograma.  
*/
#include <stdio.h>

float percAcertos(int numeroQuestotes, int totalAcertos) {
    return  totalAcertos / (float) numeroQuestotes * 100.0;
}

float percErros(int numeroQuestotes, int totalAcertos) {
    return  100 - percAcertos(numeroQuestotes,totalAcertos);
}

int main() {
    int totalQuestoes, totalAcertos;
    printf("Informe a quantidade de questoes da prova: ");
    scanf("%d", &totalQuestoes);
    printf("Informe a quantidade de acertos do aluno: ");
    scanf("%d", &totalAcertos);

    float percentualAcertos  = percAcertos(totalQuestoes,totalAcertos);
    float percentualErros = percErros(totalQuestoes,totalAcertos);

    printf("Percentual de acerto: %.0f%%\n", percentualAcertos);
    printf("Percentual de erro: %.0f%%\n", percentualErros);
    return 0;
}