/* 
    90. Escreva um programa que leia um  número inteiro entre 1 e 12 correspondente a um 
    mês do ano e verifique o trimestre a que este mês per tence.  
*/
#include <stdio.h>


int main()
{
    
    int mes;
    printf("Informe um numero inteiro de 1 a 12 correspondente ao mes do ano.\n\n");
    printf("------> ");
    if (scanf("%d",&mes)==0 || (mes<1 || mes>12)){
        printf("Entrada Invalida!");
        getchar();
        exit(0);
    }
    if (mes<4){
        printf("O mes %d pertence ao primeiro trimestre do ano.",mes);
    } else if (mes>3 && mes<7){
        printf("O mes %d pertence ao segundo trimestre do ano.",mes);
    }
     else if (mes>6 && mes<10){
        printf("O mes %d pertence ao terceiro trimestre do ano.",mes);
    } else{
        printf("O mes %d pertence ao quarto trimestre do ano.",mes);
    }
    getchar();
}
