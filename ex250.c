/* 
    250. Escreva um programa que leia cinco números inteiros e determine o  segund o maior 
    número digitado pelo usuário e a ordem em que o mesmo foi digitado. Esta 
    verificação deve ser realizada através de um subprograma.  
*/

#include <stdio.h>
#define TAMANHO 5

int segundoMaior(int array[]) {
    int maior = 0;
    int c;
    for (c = 1; c < TAMANHO; c++) {
        if (array[c] > array[maior]) {
            maior = c;
        }
    }

    int segundoMaior = 0;
    for (c = 1; c < TAMANHO; c++) {
        if (array[c] > array[segundoMaior] && array[c] != array[maior]) {
            segundoMaior = c;
        } 
    }

    return segundoMaior + 1;
}

int main() {
    int numerosDigitados[TAMANHO];

    int c;
    for (c = 0; c < TAMANHO; c++){
        printf("Informe um numero inteiro: ");
        scanf("%d", &numerosDigitados[c]);
    }

    int result = segundoMaior(numerosDigitados);

    printf("O %d(ro-to-do) digitado eh o segundo maior numero. ( %d )\n", result, numerosDigitados[result]);

    return 0;
}