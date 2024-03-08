/* 
    176. Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros 
    e imprima a matriz lida.  
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int matriz[4][4];

    for (int c=0; c<4; c++){
        for (int c2=0; c2<4; c2++){
            int num;
            printf("Informe o numero da matriz posicionado na [linha %d / coluna %d] -> ",c2,c);
            if (scanf("%d",&num)==0){
                printf("Numero invalido, o programa vai considerar como 0!\n");
                num = 0;
                fflush(stdin);
            }
            matriz[c2][c]=num;
        }
        printf("\n");
    }

    char num_str[500]="";
    int maior = matriz[0][0];

    for (int c=0; c<4; c++){
        for (int c2=0; c2<4; c2++){
            if (matriz[c][c2]>maior){
                maior= matriz[c][c2];
            }
        }
        //printf("    |\n");
    }

    sprintf(num_str,"%d",maior);
    int len =strlen(num_str);

    printf("Matriz gerada: \n\n");

    for (int c=0; c<4; c++){
        printf("|");
        for (int c2=0; c2<4; c2++){
            printf(" %*d",len,matriz[c][c2]);
        }
        printf("%*s|\n",len," ");
    }
    return 0;
}
