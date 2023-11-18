/* 
    69. Escreva um programa que leia as coordenadas x e y de um ponto e verifique a 
    quantidade de quadrantes a que este ponto pertence.  
*/
#include <stdio.h>
#include <string.h>

int main()
{
    printf("<<< exe070 >>>\n\n");
    float x,y;
    printf("Informe a coordenada X do ponto: ");
    scanf("%f",&x);
    printf("Informe a coordenada Y do ponto: ");
    scanf("%f",&y);

    //verificacao para o output sair bonito
    char x_str[30];
    char y_str[30];

    if (x==(int)x){
        sprintf(x_str,"%d",(int)x);
    } else{
        sprintf(x_str,"%f",x);
        int lenx = strlen(x_str);
        while (x_str[lenx-1]=='0'){
            x_str[lenx-1]='\0';
            --lenx;
        }
    }

     if (y==(int)y){
        sprintf(y_str,"%d",(int)y);
    } else{
        sprintf(y_str,"%f",y);
        int leny = strlen(y_str);
        while (y_str[leny-1]=='0'){
            y_str[leny-1]='\0';
            --leny;
        }
    }
    // fim da verificacao

    if (x>0 && y>0){
        printf("O ponto de coordenadas (%s , %s) pertence ao Primeiro quadrante.",x_str,y_str);
    } else if (x<0 && y>0){
        printf("O ponto de coordenadas (%s , %s) pertence ao Segundo quadrante.",x_str,y_str);
    }  else if (x<0 && y<0){
        printf("O ponto de coordenadas (%s , %s) pertence ao Terceiro quadrante.",x_str,y_str);
    }  else if (x>0 && y<0){
        printf("O ponto de coordenadas (%s , %s) pertence ao Quarto quadrante.",x_str,y_str);
    }  else if (x==0 && y!=0){
        printf("O ponto de coordenadas (%s , %s) pertence ao eixo das abscissas.",x_str,y_str);
    } else if (x!=0 && y==0){
        printf("O ponto de coordenadas (%s , %s) pertence ao eixo das ordenadas.",x_str,y_str);
    } else {
        printf("O ponto de coordenadas (%s , %s) pertence a origem do plano cartesiano.",x_str,y_str);
    }
    return 0;
}

