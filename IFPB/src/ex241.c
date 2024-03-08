/* 
    241. Escreva um programa que leia o peso e a altura de uma pessoa e verifique se ela está 
    dentro da faixa de peso adequada, ou se está abaixo ou acima do peso. Caso a 
    pessoa esteja fora do peso adequado o programa deve informar quantos Kg ela dev e 
    ganhar ou perder para ficar dentro da faixa adequada. Para resolver este programa, 
    considere que o IMC ideal para uma pessoa deve estar entre 18 e 25.  
    
    O programa deve ter um subprograma para calcular o IMC, um subprograma para verificar a 
    situaçã o da pe ssoa, um subprograma para calcular quantos quilos ela precisa perder 
    e um subprograma para calcular quantos quilos ela precisa ganhar.  
*/
#include <stdio.h>

typedef enum {
    ABAIXO = 0,
    ADEQUADO = 1,
    ACIMA = 2,
} SITUACAO;

float IMC(float peso, float altura) {
    return peso / (altura * altura);
}

SITUACAO verificarSituacao(float imc) {
    if (imc < 18) {
        return ABAIXO;
    } else if (imc > 25) {
        return ACIMA;
    } else {
        return ADEQUADO;
    }
}

float controladorPeso(float peso, float altura) {
    float resultAbaixo = (18 * (altura * altura)) - peso;
    float resultAcima = peso - (25 * (altura * altura));
    if (resultAbaixo > 0) return resultAbaixo;
    if (resultAcima > 0) return resultAcima;

    return 0;
}


int main() {
    float peso, altura, imc, pesoControler;

    printf("Informe seu peso em KG: ");
    scanf("%f", &peso);    
    printf("Informe sua altura em metros: ");
    scanf("%f", &altura);

    imc = IMC(peso, altura);
    printf("Seu IMC eh de %.2f\n", imc);
    SITUACAO situ = verificarSituacao(imc);
    if (situ == ABAIXO) {
        pesoControler = controladorPeso(peso, altura);
        printf("Voce esta abaixo do peso e precisa ganhar %.2f para entrar em forma!", pesoControler);
    } else if (situ == ACIMA) {
        pesoControler = controladorPeso(peso, altura);
        printf("Voce esta acima do peso e precisa perder %.2f para entrar em forma!", pesoControler);
    } else {
        printf("Voce esta em forma!");
    }
    printf("\n");

    return 0;
}