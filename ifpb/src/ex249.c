/* 
    249. Escreva um programa que leia quatro números reais e verifique se eles formam, na 
    ordem em que for am digi tados, uma progressão aritmética, uma progressão 
    geométrica, os dois tipos de progressão ou nenhum tipo de progressão.  
    
    Esta verificação deve ser realizada através de um subprograma.  
*/
#include <stdio.h>
#define TAMANHO 4

int isPA(float array[]) {
    float num = array[1] - array[0];
    int c;
    for (c = 1; c < TAMANHO - 1; c++) {
        float result = array[c + 1] - array[c];
        if (result != num) return 0;
    }
    return 1;
}

int isPG(float array[]) {
    float num;
    if (array[0] == 0) num = 0;
    else num = array[1] / array[0];

    int c;
    for (c = 1; c < TAMANHO - 1; c++) {
        float result;

        if (array[c] == 0) result = 0;
        else result = array[c + 1] / array[c];

        if (result != num) return 0;
    }
    return 1;
}

int main() {
    float numerosDigitados[TAMANHO];

    int c;
    for (c = 0; c < TAMANHO; c++){
        printf("Informe um numero real: ");
        scanf("%f", &numerosDigitados[c]);
    }

    int ehPA = isPA(numerosDigitados);
    int ehPG = isPG(numerosDigitados);

    printf("A sequencia digitada ");
    if (ehPA && ehPG) {
        printf("eh uma PA e uma PG");
    } else if (ehPA && !ehPG) {
        printf("eh uma PA e nao eh uma PG");
    } else if (ehPG && !ehPA) {
        printf("eh uma PG e nao eh uma PA");
    } else {
        printf("nao eh uma PG e nao eh uma PA");
    }
    printf("\n");


    return 0;
}