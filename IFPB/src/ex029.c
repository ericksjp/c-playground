/* 
    29. Escreva um programa que leia o número total de questões existentes em uma prova e 
    o número de questõe s que um candidato acertou e determine o seu percentual de 
    acertos e o seu percentual de erros.  
*/
#include <stdio.h>
#include <string.h>

int main()
{
    
    printf("<<< exe029 >>>\n\n");

    int questoes;
    int acertos;

    //recebendo os dados.
    printf("Informe a quantidade de questoes da prova: ");
    scanf("%d",&questoes);
    printf("Informe a quantidade de acertos: ");
    scanf("%d",&acertos);

    //calculando o percentual de acertos
    float percentual= ((float)acertos/questoes)*100;
    char percentual_str[30];

    //mecanismo para deixar a formata��o mais botinha
    if (percentual==(int)percentual){
        //se o percentual for integral, vamos converter o float em inteiro e transformalo em string
        int percentual2 = (int)percentual;
        sprintf(percentual_str,"%d",percentual2);
    } else {
        //o contrario, vamos transformar o float em string, e remover todos os 0 depois do ultimo numeor maior que 0 apos o ponto flutuante. evitando 10,95000000 -> 10,95
        sprintf(percentual_str,"%f",percentual);
        int len = strlen(percentual_str);
        while (percentual_str[len-1]=='0'){ //percentual_str[len-1] -> ultimo termo da string, enquanto for 0 o loop continua
            percentual_str[len-1] = '\0'; //remove o ultimo termo da string
            --len; //atualiza o tamanho da string
        }
    }
    //mostrando o resultado
    printf("Seu percentual de acerto foi de %s%%.",percentual_str);
    return 0;
}
