/* 
    177. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
    calcule a sua matriz transposta . 
*/
#include <stdio.h>
#include <string.h>

int main()
{
    float matriz[5][5];

    for (int c=0; c<5; c++){
        for (int c2=0; c2<5; c2++){
            float num;
            printf("Informe o numero da matriz posicionado na [linha %d / coluna %d] -> ",c,c2);
            if (scanf("%f",&num)==0){
                printf("Numero invalido, o programa vai considerar como 0!\n");
                num = 0;
                fflush(stdin);
            }
            matriz[c][c2]=num;
        }
        printf("\n");
    }

    char num_str[500]="";
    float maior = matriz[0][0];

    for (int c=0; c<5; c++){
        for (int c2=0; c2<5; c2++){
            if (matriz[c][c2]>maior){
                maior= matriz[c][c2];
            }
        }
        //printf("    |\n");
    }

    sprintf(num_str,"%f",maior);
    int len =strlen(num_str);

    printf("Matriz gerada: \n\n");

    for (int c=0; c<5; c++){
        printf("|%*s",-len," ");
        for (int c2=0; c2<5; c2++){
            printf(" %*f",len,matriz[c][c2]);
        }
        printf("%*s|\n",len," ");
    }

    float matriz_transposta[5][5];

    for (int c=0; c<5; c++){
        for (int c2=0; c2<5; c2++){
            matriz_transposta[c][c2]=matriz[c2][c];
        }
    }
        //printf("    |\n");

    printf("\nMatriz transposta: \n\n");

    for (int c=0; c<5; c++){
        printf("|%*s",-len," ");
        for (int c2=0; c2<5; c2++){
            printf(" %*f",len,matriz_transposta[c][c2]);
        }
        printf("%*s|\n",len," ");
    }
    return 0;
}
