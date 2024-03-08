/* 
    170. (OPI -2013) Um escritório de informática possui um corredor bem amplo com N salas. 
    Em um certo final de semana, o vigia resolve u tomar cachaça e brincar de abrir e 
    fechar as portas das salas para passar o tempo. Na primeira rodada, ele abriu todas 
    as portas das salas    e tomou uma lapada de cana. Na segunda rodada, ele fechou as 
    portas de todas as salas com números pares e tomou o utra lapada de cana. Na 
    terceira rodada, ele visitou todas as salas cujo número era um múltiplo  de 3. Se a 
    porta da sala estivesse  aberta, ele  a fech ava. Se a porta da sala estivesse fechada, ele 
    a abria . Ele repetiu esta brincadeira até a N -ésima r odada. Depois ele tomou uma 
    lapada de cana e desmaiou.  
    
    Quando o gerente chegou na segunda -feira viu o vigia 
    desmaiado e tomou um susto. Com base nessas informaçõe s, escreva um programa  
    que leia o número de portas existentes no escritório e identifique qu antas p ortas 
    ficaram abertas após o vigia desmaiar.  
    
    Seguem alguns casos de teste:  
     Número total de portas  Número de portas que ficaram abertas  
    2    1 
    15 3 
    50 7 
    100 10 .  
*/
#include <stdio.h>

int main(){
    int portas;
    printf("Informe o numero de portas do escritorio: ");
    scanf("%d",&portas);

    int portas_lt[portas];

    int contador=0;
    for (int c=0; c<portas;c++){

        if (c%2==0){
            portas_lt[c]=1;
        } else {
            portas_lt[c]=0;
        }

        //printf("%d (%d) - ",portas_lt[c],c+1);

        if ((c+1)%3==0){
        //printf("%d",portas_lt[c]);
        if (portas_lt[c]==0){
                portas_lt[c]=1;
            } else {
                portas_lt[c]=0;
            }
        }

        if (portas_lt[c]==1){
            contador++;
        }

    }

    printf("\\nNumero de portas abertas: %d\n",contador);
    return 0;

}
