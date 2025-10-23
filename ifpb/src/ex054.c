/* 
    54. Seu Joaquim é um  motori sta que viaja  todos os dias de Cajazeiras para João Pessoa 
    para fazer entregas para empresa na qual trabalha. Durante o percurso, ele para 
    realizar entregas em Sousa, Patos, Campina Grande e João Pessoa. Considerando que 
    seu Joaquim gasta 50 minutos  no per curso de Cajazeiras para Sousa, 2 horas no 
    percurso entre Sousa e Patos, 2 horas e 30 minutos no percurso entre Patos e Campina 
    Grande e 2 horas no percurso entre Campina Grande e João Pessoa, e que cada 
    entrega demora exatamente 20 minutos, escreva  um pro grama que leia o horário em 
    que seu Joaquim saiu de Cajazeiras (horas e minutos) e calcule o horário em que ele 
    chegará em cada cidade do itinerário.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe054 >>>\n\n");
    
    int hora,minuto;
    printf("Informe o horario de saida nesse formato (hh:mm). Exemplo: -> 17:45 \n");
    printf("-------> ");
    scanf("%d : %d",&hora,&minuto);

    int resto_minuto = (minuto+50)/60;
    int sousa_minuto = (minuto+50)%60;
    int sousa_hora = (hora+resto_minuto)%24;
    resto_minuto = (sousa_minuto+20)/60;
    int patos_minuto = (sousa_minuto+20)%60;
    int patos_hora = (sousa_hora+resto_minuto+2)%24;
    resto_minuto = (patos_minuto+20+30)/60;
    int cg_minuto = (patos_minuto+20+30)%60;
    int cg_hora = (patos_hora+resto_minuto+2)%24;
    resto_minuto = (cg_minuto+20)/60;
    int jp_minuto = (cg_minuto+20)%60;
    int jp_hora = (cg_hora+resto_minuto+2)%24;

    printf("\nSousa -> %02d:%02d  ",sousa_hora,sousa_minuto);
    printf("|  Campina Grande -> %02d:%02d\n",cg_hora,cg_minuto);
    printf("Patos -> %02d:%02d  ",patos_hora,patos_minuto);
    printf("|  Joao Pessoa    -> %02d:%02d\n",jp_hora,jp_minuto);
    return 0;
}
