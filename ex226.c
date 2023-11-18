/*
    226. Escreva um programa que leia um  número inteiro e verifique se ele é positivo, 
    negativo ou neutro. Esta verificação deve ser realizada através de um subprograma.  
*/
#include <stdio.h>

// 1 = negativo | 2 = neutro | 3 = positivo
int verificarTipo(int num) {
    if (num == 0) return 2;
    else if (num < 0) return 1;
    else return 3;
}

int main() {
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    int tipo = verificarTipo(num);

    printf("O numero eh ");
    if (tipo == 1) printf("negativo.\n");
    else if (tipo == 2) printf("neutro.\n");
    else  printf("positivo.\n");

    return 0;
}
