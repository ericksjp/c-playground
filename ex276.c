/* 
    276. Escreva um subprograma recursivo que receba como entrada um número inteiro N 
    não negativo e imprima a saída mostrada abaixo. O exemplo abaixo considera que N é 
    igual a 5.  
    *****  
    ****  
    *** 
    ** 
    * 
*/
#include <stdio.h>

void estrelas (int x)
{
    void estrelasin (int j)
    {
        if (j==0){
            printf("\n");
        }else{
            printf("*");
            estrelasin (j-1);
        }
    }

    if (x==1){
        estrelasin (x);
    }else{
        estrelasin (x);
        estrelas (x-1);
    }
}

int main()
{
    int est;
    printf("-> ");
    scanf("%d",&est);
    estrelas(est);
    return 0;
}
