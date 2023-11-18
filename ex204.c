/* 
    204. Escreva um programa que leia o valor de cinco temperaturas em Celsius e, para cada 
    valor lido, calcule o seu valor correspondente em Fahrenheit e em Kelvin. Os cálculos 
    das conversões devem ser realizados através de subpr ogramas . 
 */
#include <stdio.h>

float tokelvin(float temp)
{
    return temp+273;
}

float tofahrenheit (float temp)
{
    return temp*1.8+32;
}

int main()
{
    float temp;
    for (int c = 0; c<5; c++){
        printf("Informe o valor da temperatura em celsius -> ");
        scanf("%f",&temp);

        float kelvin = tokelvin(temp);
        float fahrenheit = tofahrenheit(temp);

        printf("\nTemperatura em kelvin -> %2f\n",kelvin);
        printf("Temperatura em fahrenheit -> %2f\n\n",fahrenheit);
    }
    return 0;
}
