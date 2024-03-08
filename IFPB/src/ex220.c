/* 
    220. Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu 
    índice de massa corporal, que deve ser calculado através de um subprograma.  
*/
#include <stdio.h>

float calcIMC(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    float peso, altura;
    printf("Informe seu peso em Kg: ");
    scanf("%f", &peso);
    printf("Informe sua altura em metros: ");
    scanf("%f", &altura);
    float imc = calcIMC(peso, altura);

    printf("Seu IMC eh de %.2f\n", imc);

    return 0;
}