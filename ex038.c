/* 
    38. Escreva um programa que leia um valor em segundos e converta para a forma X horas 
    Y minutos e Z segundos. Por exemplo , o valor 3670 equivale a 1 hora 1 minutos e 10 
    segundos.  
*/
#include <stdio.h>

int main() {
    printf("<<< exe038 >>>\n\n");
    int segundos,horas,minutos,total_segundos;
    printf("Valor em segundos: ");
    scanf("%d",&segundos);

    horas = segundos/3600;
    minutos = (segundos%3600)/60;
    total_segundos = (segundos%3600)%60;

    printf("%d segundos equivalem a: %d Horas - %d Minutos - %d Segundos",segundos,horas,minutos,total_segundos);
    return 0;

}
