/* 
    39. Escreva um programa que leia o tamanho de um arquivo em MB e a taxa de 
    transmissão da rede em KB/s e calcule o tempo aproximado necessário para a 
    transmissão do arquivo. A resposta deve ser dada at ravés de uma mensagem na forma 
    X horas, Y minutos e Z segundos.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe039 >>>\n\n");
    float tamanho,velocidade,tempo_download;
    int minutos,horas,total_segundos;
    printf("Informe o tamanho do arquivo (MB): ");
    scanf("%f",&tamanho);
    printf("Taxa de transmissao de rede (KB/s): ");
    scanf("%f",&velocidade);

    tempo_download = (tamanho*1024)/(velocidade/8);

    horas = (int)tempo_download/3600;
    minutos =((int)tempo_download%3600)/60;
    total_segundos = ((int) tempo_download%3600)%60;

    printf("Tempo estimado para baixar o arquivo:\nhh:mm:ss\n%d:%d:%d \n",horas,minutos,total_segundos);
    return 0;
}
