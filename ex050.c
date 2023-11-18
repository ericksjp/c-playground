/* 
    50.  Ana chegou a um consultório médico para uma consulta de rotina. Neste consultório, 
    o médico at ende os  seus pacientes de acordo com a ordem em que eles chegaram 
    (cada paciente recebe uma senha  com o número da sua ordem de chegada) e cada 
    consulta demora exatamente 25 minutos. Com base nestas informações, escreva um 
    programa que leia um número inteir o corre spondendo à hora e outro correspondendo 
    aos minutos em que Ana chegou ao consultório e o número da senha  que ela recebeu 
    e determine a hora em que ela será atendida. Para isso, considere que ela chegou ao 
    consultório no exato momento em que o médico  ia ate nder o paciente que recebeu a 
    senha  1. 
*/
#include <stdio.h>

int main()
{
    printf("<<< exe050 >>>\n\n");
    int hora,minuto,senha,hora_atendimento,minuto_atendimento,tempo_espera;
    printf("Informa primeiro a hora e depois os minutos da chegada de Ana.\n");
    printf("Hora: ");
    scanf("%d",&hora);
    printf("Minuto: ");
    scanf("%d",&minuto);
    printf("Informe o numero da senha que ana recebeu: ");
    scanf("%d",&senha);

    tempo_espera = (senha-1)*25;

    hora_atendimento= ((hora*60)+tempo_espera)/60;
    minuto_atendimento= ((hora*60)+tempo_espera)%60;
    printf("Ana sera atendida as %02d:%02d.",hora_atendimento,minuto_atendimento);
    return 0;
}
