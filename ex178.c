/* 
    178. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
    imprima todos os elementos da sua diagonal principal.  
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int matriz[5][5];

    for (int c=0; c<5; c++){
        for (int c2=0; c2<5; c2++){
            int num;
            printf("Informe o numero da matriz posicionado na [linha %d / coluna %d] -> ",c,c2);
            if (scanf("%d",&num)==0){
                printf("Numero invalido, o programa vai considerar como 0!\n");
                num = 0;
                fflush(stdin);
            }
            matriz[c][c2]=num;
        }
        printf("\n");
    }

    char num_str[500]="";
    int maior = matriz[0][0];

    for (int c=0; c<5; c++){
        for (int c2=0; c2<5; c2++){
            if (matriz[c][c2]>maior){
                maior= matriz[c][c2];
            }
        }
        //printf("    |\n");
    }

    sprintf(num_str,"%d",maior);
    int len =strlen(num_str);

    printf("Matriz gerada: \n\n");

    for (int c=0; c<5; c++){
        printf("|%*s",-len," ");
        for (int c2=0; c2<5; c2++){
            printf(" %*d ",len,matriz[c][c2]);
        }
        printf(" %*s|\n",len," ");
    }

        //printf("    |\n");

    printf("\nDiagonal principal da matriz: \n\n");

    for (int c=0; c<5; c++){
        printf("|%*s",-len," ");
        for (int c2=0; c2<5; c2++){
            if (c==c2){
                printf(" %*d ",len,matriz[c][c2]);
            } else {
                printf(" %*s ",len," ");
            }

        }
        printf(" %*s|\n",len," ");
    }
    return 0;
}
