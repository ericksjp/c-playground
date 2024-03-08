/* 
    91. Escreva um programa que leia o valor de um mês e de um ano e verifique  a 
    quantidade de dias do mês informado pelo usuário.  
*/
#include <stdio.h>

#include <time.h>
#include <string.h>


int main()
{
    
    int mes,ano;

    printf("Informe um numero inteiro correspondente ao mes desejado -> ");
    if (scanf("%d",&mes)==0 || (mes<1 || mes>12)){
        printf("Entrada de mes invalida! Tente novamente.");
        exit(0);
    }
    printf("Informe um numero inteiro correspondente ao ano desejado -> ");
    if (scanf("%d",&ano)==0){
        printf("Entrada de ano invalida! Tente novamente.");
        exit(0);
    }

    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    int ano_atual = data->tm_year+1900;

    char frescurinha[10];
    if (ano==ano_atual){
        strcpy(frescurinha, "tem");
    } else if (ano<ano_atual){
        strcpy(frescurinha, "teve");
    } else{
        strcpy(frescurinha,"ter�");
    }

    switch(mes){
        case 1:
            printf("Janeiro de %d %s 31 dias.",ano,frescurinha);
            break;
        case 2:
            if (ano%4==0 && ano%100!=0){
                printf("Fevereiro de %d %s 29 dias.",ano,frescurinha);
                break;
            } else{
                printf("Fevereiro de %d %s 28 dias.",ano,frescurinha);
                break;
            }
        case 3:
            printf("Mar�o de %d %s 31 dias.",ano,frescurinha);
            break;
        case 4:
            printf("Abril de %d %s 30 dias.",ano,frescurinha);
            break;
        case 5:
            printf("Maio de %d %s 31 dias.",ano,frescurinha);
            break;
        case 6:
            printf("Junho de %d %s 30 dias.",ano,frescurinha);
            break;
        case 7:
            printf("Julho de %d %s 31 dias.",ano,frescurinha);
            break;
        case 8:
            printf("Agosto de %d %s 30 dias.",ano,frescurinha);
            break;
        case 9:
            printf("Setembro de %d %s 30 dias.",ano,frescurinha);
            break;
        case 10:
            printf("Outubro de %d %s 31 dias.",ano,frescurinha);
            break;
        case 11:
            printf("Novembro de %d %s 30 dias.",ano,frescurinha);
            break;
        case 12:
            printf("Novembro de %d %s 31 dias.",ano,frescurinha);
            break;
        default:
            break;
    }
    fflush(stdin);
    printf("\n\nPressione uma tecla para sair...");
    getchar();
}
