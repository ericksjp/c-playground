/* 
    175. Escreva um programa que leia dois vetores de três números reais cada e calcule o 
    valo r absol uto cosseno do ângulo formado pelos dois vetores. O cosseno do ângulo 
    formado por dois vetores u = (x1, x2, ..., x N) e v = (y 1, y2, ..., y N) é calculado através da 
    seguinte fórmula:  .  
*/
#include <stdio.h>

#include <math.h>

int main()
{
    
    int vetor1[3];
    int vetor2[3];

    int* vetores[]={vetor1,vetor2};
    float norma1 = 0;
    float norma2 = 0;
    int fator1= 1;
    int fator2= 1;

    for (int c = 0; c<2; c++){
        for (int c2 = 0; c2<3; c2++){
            int num;
            printf("Informe o %d numero do vetor %d: ",c2+1,c+1);
            scanf("%d",&num);
            vetores[c][c2] = num;
        }
        printf("\n");
    }

    for (int c = 0; c<2; c++){
        for (int c2 = 0; c2<3; c2++){
            if (c==0){
                norma1 += vetores[c][c2]*vetores[c][c2];
                fator1*=vetores[c][c2];

            } else{
                norma2 += vetores[c][c2]*vetores[c][c2];
                fator2*=vetores[c][c2];
            }
        }
    }
    float norma = sqrt(norma1)*sqrt(norma2);
    float produto_interno = fator1+fator2;
    float angulo = cos(produto_interno/norma);
    //somador1 = sqrt(somador1);
    //somador2 = sqrt(somador2);
    printf("\nAngulo dos vetores informados: %f",angulo);
    return 0;
}
