/* 
    108. Escreva um programa que leia 20 número s entre 10000 e 99999 referente ao s 
    número s dos deputado s estaduais  eleitos e identifique a quantidade de candidatos 
    que cada  partid o elegeu . O número do partido  do deputado  pode ser identificado 
    pelos dois primeiros algarismos do número do candidato. Por exemplo, um candidato 
    com número 13457 concorre pelo PT, que é o partido de número 13, enquanto que um 
    candidato com número 4 5879 co ncorre pelo PSDB, que é o partido de número 45.  
    Neste programa, considere os seguintes números de partido: 13 (PT), 14 (PTB), 15 
    (PMDB), 25 (DEM), 45 (PSDB) e 65( PCdoB).  
*/
#include <stdio.h>

int main()
{
    int input [5];

    char partidos[6][20]={"PT","PTB","PMDB","DEM","PSDB","PCdoB"};
    int partido_contagem[6]={0};
    int verificador,contador=0;
    int siglas_registro[20]={0};

    contador=0;
    while (contador<20){
        printf("Informe o numero do candidato eleito: ");
        if (scanf("%d",&verificador)==1 && (verificador>=10000 && verificador<=99999)){
            siglas_registro [contador]=verificador;
        } else {
            fflush(stdin);
        }
        contador++;
    }

    printf("\N===== RESULTADOS =====\n");
    contador=0;
    while (contador<20){
        if (siglas_registro[contador]/1000==13) {
            partido_contagem[0]+=1;
        } else if (siglas_registro[contador]/1000==14) {
            partido_contagem[1]+=1;
        } else if (siglas_registro[contador]/1000==15) {
            partido_contagem[2]+=1;
        } else if (siglas_registro[contador]/1000==25) {
            partido_contagem[3]+=1;
        } else if (siglas_registro[contador]/1000==45) {
            partido_contagem[4]+=1;
        } else if (siglas_registro[contador]/1000==65) {
            partido_contagem[5]+=1;
        }
        contador++;
    }
    contador=0;
    while (contador<6){
    printf("%-5s elegeu: %d candidatos.\n",partidos[contador],partido_contagem[contador]);
    contador++;
    }
    return 0;

}



