/* 
    163. O IFPB precisa de um programa que faça a correção automática das provas do seu 
    teste de sel eção. A  prova, que é a mesma para todos os alunos, consiste de dez 
    questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o 
    gabarito da prova e, a seguir, o nome de um candidato e as opções que aparecem  no 
    seu cartão de respostas . Para cada candidato, o programa deve imprimir o seu 
    percentual de acertos. O processamento deve ser encerrado quando for encontrado 
    um candidato com o nome ´fim’, que não deve ser processado. O programa deve 
    imprimir também a pontuação média dos candidat os. 
*/
#include <stdio.h>
#include <string.h>

int main()
{
    
    char gabarito[10]= {'a','b','b','c','d','a','e','e','d','a'};
    int acertos_total=0; int c = 0;

    char nome [500]="";

    while(1) {
        int acertos=0;
        fflush(stdin);
        printf("Informe o nome do canditado: ");
        gets (nome);
        if (strcmp(nome,"fim")==0){
            break;
        }
        printf("\nAbaixo, informe o gabarito da prova do candidato.\n");
        int c2=0;
        while (c2<10){
            fflush(stdin);
            char resposta;
            printf("Questao %d. ",c2+1);
            resposta = getchar();
            if (resposta==gabarito[c2]){
                acertos++;
            }
            c2++;
        }
        acertos_total+=acertos;
        c++;
        float percentual_acertos = (float)acertos*10;
        printf("\nPercentual de acertos do canditado: %.2f%%",percentual_acertos);
        printf("\n\n------------------------------------------------------------\n\n");
    }

    float media;

    if (c!=0){
        media = (acertos_total / (float)c)*10;
    } else{
        media = 0;
    }

    printf("Percentual de acertos total: %.2f%%",media);



}
