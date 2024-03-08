/*
    35. Escreva um programa que leia o valor de uma distância em metros e calcule o seu 
    valor correspondente em quilômetros, hectômetros, decâmetros, centímetros, 
    decímetros e milímetros . 
*/
#include <stdio.h>
#include <stdlib.h>

int main () {
    printf("<<< exe035 >>>\n\n");
    float km,hm,dam,m,cm,dc,mm;

    printf("Informe a distancia em metros: ");
    if (scanf("%f",&m)==0){
        printf("Erro!");
        exit(0);
    }
    km = m/1000;
    hm = m/100;
    dam = m/10;
    cm = m*100;
    dc = m*1000;
    mm = m*10000;

    printf("Valor em KM: %.2f\n",km);
    printf("Valor em HM: %.2f\n",hm);
    printf("Valor em DAM: %.2f\n",dam);
    printf("Valor em CM: %.2f\n",cm);
    printf("Valor em DM: %.2f\n",dc);
    printf("Valor em MM: %.2f\n",mm);
    return 0;

}
