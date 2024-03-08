/* 
    264. Escreva um subprograma recu rsivo e m pascal que receba como parâmetro de 
    entrada três números inteiros positivos e calcule o MMC destes três números. Para 
    isto, você deve usar a função chamada menorDivisor , mostrada abaixo, que recebe 
    como entrada três números inteiros positivos e ca lcula q ual o menor número inteiro 
    maior ou igual a 2 que divide pelo menos um dos três números recebidos.  
*/
#include <stdio.h>

int ehprimo (int c)
{
    int verificador = 0;
    for (int primo = 1; primo<=c; primo++){
        if (c%primo==0){
            verificador++;
        }
    }
    if (verificador==2){
        return 1;
    } else {
        return 0;
    }
}


int menordiv(int num1,int num2,int num3)
{
    int maior = num1;
    if (num2 > maior && num2>num3){
        maior = num2;
    } else if (num3>maior){
        maior = num3;
    }

    if (maior<2){
        return 0;
    }
    int md = 0;
    int c = 1;
    while (md==0){
        if ((num1%c==0 || num2%c==0|| num3%c==0) && ehprimo(c)){
            md = c;
        }
        c++;
    }
    return md;
}

int mmc (int num1, int num2, int num3)
{
    if (num1==1 && num2==1 && num3==1){
        return 1;
    } else if (num1<1 || num2<1 || num3<1){
        return 0;
    } else{
        int md = menordiv(num1,num2,num3);
        if (num1%md==0){
            num1/=md;
        }
        if (num2%md==0){
            num2/=md;
        }
        if (num3%md==0){
            num3/=md;
        }
        return mmc(num1,num2,num3) * md;
    }
}

int main()
{
    printf("Informe 3 numeros inteiros positivos: \n\n");
    int n1, n2, n3;
    printf("-> ");
    scanf("%d",&n1);
    printf("-> ");
    scanf("%d",&n2);
    printf("-> ");
    scanf("%d",&n3);

    int md = mmc(n1,n2,n3);
    printf("\nMMC = %d",md);
    return 0;
}
