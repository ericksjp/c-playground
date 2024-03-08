/* 
    224. Escreva um programa que leia um número inteiro e determine o seu valor absoluto. 
    O valor absoluto deve ser calculado através de um subprogra ma (sem  usar qualquer 
    subprograma fornecido pela linguagem de programação).  
*/
#include <stdio.h>

int valorABS(int num) {
    if (num < 0) return num * -1;
    else return num;
}

int main() {
    int num;
    printf("Informe um valor inteiro: ");
    scanf("%d", &num);
    int absoluto = valorABS(num);
    printf("O valor absoluto de %d eh %d.\n", num, absoluto);

    return 0;
}