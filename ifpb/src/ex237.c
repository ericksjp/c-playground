/* 
    237. Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e 
    calcule todas as suas raízes reais. O programa deve ter um subprograma para calcular 
    o valo r de delta, além de subprogramas para determinar as raízes da equação.  
*/

#include <stdio.h>
#include <math.h>

float calcularDelta(float coeA, float coeB, float coeC) {
    return pow(coeB, 2) - (4 * coeA * coeC);
}

float calcularRaiz1(float coeA, float coeB, float coeC) {
    return (-coeB + sqrt(calcularDelta(coeA, coeB, coeC))) / 2*coeA;
}

float calcularRaiz2(float coeA, float coeB, float coeC) {
    return (-coeB - sqrt(calcularDelta(coeA, coeB, coeC))) / 2*coeA;
}

int main() {
    float coeA, coeB, coeC;
    printf("Informe o coeficiente A da quacao: ");
    scanf("%f", &coeA);
    printf("Informe o coeficiente B da quacao: ");
    scanf("%f", &coeB);
    printf("Informe o coeficiente C da quacao: ");
    scanf("%f", &coeC);

    float resultadoRaiz1 = calcularRaiz1(coeA,coeB,coeC);
    float resultadoRaiz2 = calcularRaiz2(coeA,coeB,coeC);
    
    printf("As raizes da equacao sao: %.2f e %.2f\n", resultadoRaiz1, resultadoRaiz2);

    return 0;
}