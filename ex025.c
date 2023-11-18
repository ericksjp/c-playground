/* 
    25. Escreva um programa que leia um número inteiro N e imprima dos 10 primeiros 
    elementos da  sua tabuada. A saída do programa deve seguir o formato abaixo, que 
    mostra os 5 primeiros elementos da tabuada do 2.  
    1 X 2 = 2  
    2 X 2 = 4  
    3 X 2 = 6  
    4 X 2 = 8  
    5 X 2 = 10  
*/
#include <stdio.h>

int main() {

    //declaracao variaveis
    
    printf("<<< exe025 >>>\n\n");

    int numero;

    //entrada de dados
    printf("Digite um numero inteiro para ver sua tabuada: ");
    scanf("%d",&numero);

    //contador
    int c=1;

    printf("\n         -------------------\n");

    //saida
    for (c; c<=10 ; c++){
        int tabuada = c*numero;
        printf("         |   %d x %2d = %-4d |\n",numero,c,tabuada);
    }
    printf("         -------------------\n");
    return 0;
}

