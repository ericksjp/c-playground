/* 
    117. Escreva um programa que leia 10 números inteiros e, para cada número lido, calcule o 
    seu fatorial.  
*/
#include <stdio.h>


int fat(int n){

    int c=0;

    int soma=1;
    if (n>0){
        while (n!=0){
            soma*=n;
            n--;
        }
        return soma;

    } else if (n<0){
        while (n!=0){
            soma*=n;
            n++;
        }
        return soma;

    } else {
        return 0;
    }
}

int main()
{
    

    long int numeros[20]={-999999999};
    int numero;

    int c=0;
    while (c<20){
        printf("Informe o %d numero inteiro -> ",c+1);

        if (scanf("%d",&numero)==0){
            printf("\nEntrada invalida! Informacoes descartadas.\n");
            numeros[c]=-999999999;
            fflush(stdin);
        } else {
            numeros[c]=numero;
        }
        c++;
    }

    c=0;
    printf("\n================== RESULTADOS ==================\n\n");
    while (c<20){
        if (numeros[c]>-999999999){
            long int fatorial = fat(numeros[c]);
            printf("%d! = %ld\n",numeros[c],fatorial);
        }
        c++;
    }
    return 0;
}

