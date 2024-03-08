/* 
    88. Escreva um programa que leia um único número entre 10000 e 99 999 ref erente ao 
    número de um deputado estadual  e identifique o partido pelo qual ele está 
    concorrendo. O número do partido pode ser identificado pelos dois primeiros 
    algarismos do número do candidato. Por exemplo, um candidato com número 13457 
    concorre pe lo PT, que é o partido de número 13, enquanto que um candidato com 
    número 45879 concorre pelo PSDB, que é o partido de número 45.  
    Neste programa, considere os seguintes números de partido: 13 (PT), 14 (PTB), 15 (PMDB), 25 (DEM), 45 
    (PSDB) e 65( PCdoB).  
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main()
{
    
    int num;
    printf("Informe o numero do canditado (5 digitos): ");
    if (scanf("%d",&num)==0 || (num<10000 || num>99999)){
        printf("Numero Invalido!");
        exit(0);
    }
    char num_str[6];
    sprintf(num_str,"%d",num);
    char sigla[3];
    strncpy(sigla, num_str, 2);

    if (!strcmp(sigla,"13")){
        printf("Partido dos Trabalhadores (PT)");
    } else if (!strcmp(sigla,"14")){
        printf("Partido Trabalhista Brasileiro (PTB)");
    } else if (!strcmp(sigla,"15")){
        printf("Movimento Democratico Brasileiro (MDB)");
    } else if (!strcmp(sigla,"25")){
        printf("Democratas (DEM)");
    } else if (!strcmp(sigla,"45")){
        printf("Partido da Social Democracia Brasileira (PSDB)");
    } else if (!strcmp(sigla,"65")){
        printf("Partido Comunista do Brasil (PCdoB)");
    } else {
        printf("Partido nao reconhecido!");
    }
    getchar();
}
