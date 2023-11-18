/* 
    208. Escreva um programa que leia o valor do seno de um ângulo e calcule o valor 
    absoluto do seu cosseno. O cálculo deve ser realizado através de um subprograma.  
*/
#include <stdio.h>
#include <math.h>

float cosseno(float seno)
{
    float cosseno = sqrt(1-seno*seno);

    if (cosseno<0){
        cosseno*=-1;
    }

    return cosseno;
}

int main()
{
    float seno;
    printf("Informe o valor do seno do angulo desejado -> ");
    scanf("%f",&seno);

    float valcosseno = cosseno(seno);

    printf("\nValor do cosseno -> %2f",valcosseno);
    return 0;
}
