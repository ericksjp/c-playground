/* 
    245. Escreva um programa que leia um número inteiro entre 1 e 12 correspondente a um 
    mês do ano e verifique o trimestre a que este mês pertence. Esta verificação deve ser 
    realizada através de um subprograma.  
*/
#include <stdio.h>


int trimestre (int mes)
{
    if (mes<5){
        return 1;
    } else if (mes>8){
        return 3;
    } else {
        return 2;
    }
}

int main()
{
    int mes;
    printf("Informe o mes do ano numericamente -> ");
    scanf("%d",&mes);

    int trm = trimestre(mes);

    printf("O mes %02d pertence ao %do trimestre do ano.",mes,trm);
    return 0;
}
