/* 
    63. Escreva um programa que leia o núm ero de gols marcados pelo time da casa e o 
    número de gols marcado pelo time visitante e verifique se o jogo foi vencido pelo time 
    da casa, pelo time visitante ou se terminou empatado.  
*/
#include <stdio.h>


int main()
{
    printf("<<< exe063 >>>\n\n");
    
    int timecasa,timefora;
    printf("Informe o numero de gols marcados pelo time da casa: ");
    scanf("%d",&timecasa);
    printf("Informe o numero de gols marcados pelo time de fora: ");
    scanf("%d",&timefora);

    if (timecasa>timefora){
        printf("Vitoria do time da casa por -> %dx%d",timecasa,timefora);
    } else if (timefora>timecasa){
        printf("Vitoria do time de fora por -> %dx%d",timefora,timecasa);
    } else {
        printf("O jogo terminou empatado em -> %dx%d",timecasa,timefora);
    }
    return 0;
}
