/*
    116. Escreva  um programa que leia o nome, o sexo e a idade de um grupo de 20 pessoas e 
    calcule o percentual de mulheres que tem entre 18 e 21 anos.  
*/
#include <stdio.h>

#include <string.h>

int main()
{
    
    int pessoas_registradas=0,mulheres=0;
    float percentual_mulheres=0;

    int c=0;
    while (c<5){
        fflush(stdin);
        int idade;
        char sexo;
        
        printf("Informe o sexo da %d pessoa: ",c+1);
        sexo = getchar();
        sexo = toupper(sexo);

        if (sexo=='M'||sexo=='F'){
            printf("Informe a idade da %d pessoa: ",c+1);
            if (scanf("%d",&idade)==1 && idade>=0){
                printf("\nInformacoes registradas!\n");
                printf("------------------------------------------------\n");
                pessoas_registradas+=1;

                if (sexo=='F' && idade>=18 && idade<=21){
                    mulheres+=1;
                    percentual_mulheres= mulheres*100/pessoas_registradas;
                    fflush(stdin);
                }
            } else {
                printf("\nEntrada invalida! Informacoes descartadas.\n");
                printf("------------------------------------------------\n");
                fflush(stdin);
            }

        } else {
            printf("\nEntrada invalida! Informacoes descartadas.\n");
            printf("------------------------------------------------\n");
            fflush(stdin);
        }
        ++c;
    }
    printf("\n========= RESULTADOS =========\n");
    printf("Total de pessoas registradas:  %d\n",pessoas_registradas);
    printf("Total de mulheres entre 18 e 21 anos registradas: %d\n\n",mulheres);
    printf("Percentual de mulheres entre 18 e 21 anos: %%%.2f\n",percentual_mulheres);
    return 0;
}
