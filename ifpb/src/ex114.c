/* 
    114. Escreva um programa que leia dois números inteiros M e N e calcule o valor de MN. A 
    potenciação deve ser calculada através de um comando de repetição, sem a utilização 
    de qualquer  função oferecida pela ling uagem d e programação.  
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

float potte(float b, float e)
{
    float base = b;
    float expoente = e;

    if (expoente==0){
        return 1;
    }

    else if (base==0){
        return 0;
    }

    else if (base<0 && expoente<0){
        int cont=-1;
        float soma=1;
        while (cont>=expoente){
            soma*=base;
            cont--;
        }
        if (soma>0){soma=soma*-1;}
        float resultado = 1/soma;

        float sobra = expoente - (int)expoente;
        if (sobra<0){
            float fracionario = pow(-base, sobra);
            resultado = resultado*fracionario;
            return resultado;
        }


        return resultado;

    } else if (base>0 && expoente<0){
        int cont=1;
        float soma=1;
        while (cont<=expoente*-1){
            soma*=base;
            cont++;

        }
        float resultado = 1/soma;

        float sobra = expoente - (int)expoente;
        if (sobra<0){
            float fracionario = pow(base, sobra);
            resultado = resultado*fracionario;
            return resultado;
        }

        return resultado;

    } else if (base<0 && expoente>0){
        int cont=1;
        float soma=1;
        while (cont<=expoente){
            soma*=base;
            cont++;
        }
        float resultado = soma;
        if ((int)expoente%2!=0){
            resultado-=0;
        }

        float sobra = expoente - (int)expoente;
        if (sobra>0){
            float fracionario = pow(-base, sobra);
            resultado = -resultado*fracionario;
            return resultado;
        }

        return resultado;

    } else{
        int cont=1;
        float soma=1;
        while (cont<=expoente){
            soma*=base;
            cont++;
        }
        float sobra = expoente - (int)expoente;
        float resultado = soma;
        if (sobra>0){
            float fracionario = pow(base, sobra);
            resultado = resultado*fracionario;
            return resultado;
        }
        return resultado;
    }

}


int main()
{
    int c=0;
    while (c<10){
        float base, exp;
        printf("Base: ");
        scanf("%f",&base);
        printf("Exp: ");
        scanf("%f",&exp);


        float a = potte(base,exp);
        printf("%f\n\n",a);
    }
    c++;
}
