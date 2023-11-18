/* 
    115. Escreva um programa que leia o peso e a altura de um grupo de 20 pessoas e calcule o 
    percentual de pessoas abaixo do peso, o percentual de pessoas acima do peso e o 
    percentual de pessoas que estão dentro da faixa de peso adequada
*/
#include <stdio.h>


int main()
{

    float imc[20]={-1};
    float peso;
    float altura;
    int pessoas_registradas=0;

    int c=0;
    while (c<20){
        printf("Informe a altura da %d pessoa (m) -> ",c+1);

        if (scanf("%f",&altura)==1 && altura>0){

        printf("Informe o peso da %dra pessoa (kg)  -> ",c+1);
            if (scanf("%f",&peso)==1 && peso>0){
                printf("\nInformacoes registradas!\n");

                if (altura>10){
                    altura = altura/100;
                }

                imc [c]= peso/(altura*altura);
                pessoas_registradas+=1;

                printf("----------------------------------------------\n");

            } else{
                printf("\nEntrada invalida! Informacoes descartadas.\n");
                printf("----------------------------------------------\n");
                fflush(stdin);
            }

        } else{
            printf("\nEntrada invalida! Informacoes descartadas.\n");
            printf("----------------------------------------------\n");
            fflush(stdin);
        }
        c++;
    }

    int pessoas_abaixo=0;
    int pessoas_acima=0;
    int pessoas_ideal=0;

    c=0;
    while (c<20){
        if (imc[c]>0 && imc[c]<18){
            pessoas_abaixo+=1;
        } else if (imc[c]>25){
            pessoas_acima+=1;
        } else if (imc[c]>=18 && imc[c]<=25){
            pessoas_ideal+=1;
        }
        c++;
    }

    float pessoas_acima_percentual = pessoas_acima*100/pessoas_registradas;
    float pessoas_abaixo_percentual = pessoas_abaixo*100/pessoas_registradas;
    float pessoas_ideal_percentual = pessoas_ideal*100/pessoas_registradas;

    printf("\n=============== RESULTADOS ===============\n");
    printf("\nPessoas registradas: %d\n",pessoas_registradas);
    printf("Peso ideal:     %d <--> %%%.2f\n",pessoas_ideal,pessoas_ideal_percentual);
    printf("Acima do peso:  %d <--> %%%.2f\n",pessoas_acima,pessoas_acima_percentual);
    printf("Abaixo do peso: %d <--> %%%.2f\n",pessoas_abaixo,pessoas_abaixo_percentual);

    return 0;
}
