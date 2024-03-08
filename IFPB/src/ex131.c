/* 
    131. Escreva um programa  que le ia 10 números reais distintos e calcule o segundo maior 
    número lido.  
*/
#include <stdio.h>

int main()
{
    float segundo_maior;
    float maior=0;

    int cont=0;
    int ver=0;
    while (cont<10){
        float num=0;
        printf("Informe um numero real: ");
        if (scanf("%f",&num)==0){
            num = -999999;
            fflush(stdin);
            ver+=1;
        }

        if (num >= maior){
            segundo_maior = maior;
            maior = num;
        }

        cont++;
    }

    if (ver>=8){
        printf("Dados insuficientes para a amostra dos resultados.");
    } else{
        printf("Segundo maior numero lido -> %f",segundo_maior);
    }
    return 0;
}
