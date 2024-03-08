/*
    236. Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e 
    verifique a quantidade de raízes reais da equação. O programa deve ter um 
    subprograma para  calcul ar o valor de delta e outro para determinar a quantidade de 
    raízes reais.  
*/

#include <stdio.h>
#include <math.h>

float calcularDelta(float coeA, float coeB, float coeC) {
    return pow(coeB, 2) - (4 * coeA * coeC);
}

int quantidadeRaizes(float coeA, float coeB, float coeC) {
    float delta = calcularDelta(coeA, coeB, coeC);
    if (delta > 0) {
        return 2;
    } else if (delta < 0) {
        return 0;
    }

    return 1;
}

int main() {
    float coeA, coeB, coeC;
    printf("Informe o coeficiente A da quacao: ");
    scanf("%f", &coeA);
    printf("Informe o coeficiente B da quacao: ");
    scanf("%f", &coeB);
    printf("Informe o coeficiente C da quacao: ");
    scanf("%f", &coeC);

    int quantidade = quantidadeRaizes(coeA, coeB, coeC);

    printf("Essa equacao do segundo grau possui %d raizes reais \n", quantidade);

    return 0;
}