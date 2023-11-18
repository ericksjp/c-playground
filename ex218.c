/* 
    218. Escreva um programa que leia um valor em segundos e converta para a forma X 
    horas Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1  minuto s e 10 segundos. O programa deve ter: um subprograma para calcular o valor das 
    horas, um subprograma para calcular o valor dos , um subprograma para calcular o 
    valor dos segundos e um subprograma para imprimir o resultado final.  
*/
#include <stdio.h>

#include <stdlib.h>

int horas (int segundos)
{
    return segundos/3600;
}

int minutos (int segundos)
{
    return segundos/60;
}

int segundos (int segundos)
{
    return segundos;
}

void horaformat (int horas, int minutos, int segundos)
{
    printf("%d horas %d minutos e %d segundos.",horas,minutos,segundos);
}

int main ()
{
    int segundosC;
    printf("Informe quantos segundos gostaria de converter -> ");
    scanf("%d",&segundosC);

    int horasC = horas(segundosC);
    segundosC-=horasC*3600;
    int minutosC = minutos(segundosC);
    segundosC-=minutosC*60;
    int segundosD = segundos(segundosC);

    printf("\n");
    horaformat(horasC,minutosC,segundosD);
    return 0;
}
