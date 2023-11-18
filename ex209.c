/* 
    209. Escreva um programa que leia os valores de dois  ângulo s internos de um triângulo e 
    calcule o valor do terceiro ângulo. O cálculo deve ser realizado através de um 
    subprograma.  
*/
#include <stdio.h>

float terceiro_angulo(float angulo1, float angulo2)
{
    return 180 - angulo1 - angulo2;
}

int main()
{
    float angulo1, angulo2;
    printf("Informe o valor do primeiro angulo do triangulo -> ");
    scanf("%f", &angulo1);
    printf("Informe o valor do segundo angulo do triangulo -> ");
    scanf("%f", &angulo2);

    float verificador = angulo1 + angulo2;

    if (verificador >= 180)
    {
        printf("\nA soma dos dois angulos eh maior ou ultrapassa 180 graus, portanto o triangulo eh inexistente.");
    }
    else
    {
        float angulo3 = terceiro_angulo(angulo1, angulo2);
        printf("\nValor do terceiro angulo do triangulo: %2f", angulo3);
    }
    return 0;
}
