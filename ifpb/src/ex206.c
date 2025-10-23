/* 
    206. Escreva um programa que leia o valor dos dois catetos de um t riângulo retângulo e 
    calcule o valor da hipotenusa. O cálculo deve ser realizado através de um 
    subprograma.  
*/
#include <stdio.h>
#include <math.h>

float hipotenusa (float cateto1, float cateto2)
{
    return sqrt((cateto1*cateto1)+(cateto2*cateto2));
}

int main()
{
    float cateto1,cateto2;
    printf("Informe o valor do primeiro cateto -> ");
    scanf("%f",&cateto1);
    printf("Informe o valor do segundo cateto -> ");
    scanf("%f",&cateto2);

    float valhipo = hipotenusa(cateto1,cateto2);

    printf("\nValor da hipotenusa -> %2f",valhipo);
    return 0;
}