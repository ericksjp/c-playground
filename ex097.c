/* 
    97. Escreva um programa que leia as horas, os minutos e o fuso horário e converta o 
    horário lido para o f uso hor ário informado. O fuso horário deve ser informado como 
    um número inteiro. Caso o valor seja positivo, o programa deve considerar que o fuso 
    horário digitado é maior do que o atual. Caso o valor seja negativo, o programa deve considerar que o fuso ho rário é  menor do que o atual. Caso o valor seja 0, o programa 
    deve considerar que o fuso horário é o mesmo do atual. A resposta do programa deve 
    ser dada no formato hh:mm hs. Por exemplo, se o horário lido foi 10 h e 30 min e o 
    fuso horário for 4, a respos ta do p rograma deve ser 14:30 hs. Por outro lado, se o 
    horário lido foi 10 h e30 min e o fuso horário for -4, a resposta do programa deve ser 
    06:30 hs. Se o horário lido for 22 h e 30 min e o fuso -horário for 3, a resposta deve ser 
    01:30 hs. Se o horário l ido for  2 h e 30 min e o fuso horário for -3, a resposta deve ser 
    23:30 hs. O horário referente à meia -noite deve ser representado da forma 00:00 hs.  
*/
#include <stdio.h>


int main()
{
    
    int horas, minutos,fuso;

    printf("Abaixo informe dois numeros inteiros que representarao as horas no formato (hh:mm)\n");
    printf("Hora -> ");
    if(scanf("%d",&horas)==0 || (horas<0 || horas>23)){
       printf("Entrada invalida!");
       exit(0);
       }
    printf("Minuto -> ");
    if(scanf("%d",&minutos)==0 || (minutos<0 || minutos>59)){
       printf("Entrada invalida!");
       exit(0);
       }
    printf("Hora informada -> %02d:%02d\n\n",horas,minutos);

    printf("Agora informe um numero inteiro que representara o fuso horario em horas desejado.\n");
    printf("Fuso -> ");
    if(scanf("%d",&fuso)==0 || (horas<0 || horas>23)){
       printf("Entrada invalida!");
       exit(0);
       }

    int hora_final = horas+fuso;

    if (hora_final>=24){
        hora_final = hora_final%24;
    } else if(hora_final<0){
        hora_final = 24+hora_final;
    }

    printf("\nHorario com o fuso: %02d:%02d hs.",hora_final,minutos);
    return 0;

}
