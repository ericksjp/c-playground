/* 
        87. Escreva um programa que leia u m carac tere correspondente ao estado civil de uma 
        pessoa e imprima o estado civil informado por extenso. As opções para o estado civil 
        são: S (solteiro), C (casado), D (divorciado) e V (viúvo).  
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main()
{
    
    char c;
    printf("Informe seu estado civil. Abaixo est�o as op��es disponiveis.\n");
    printf("S (solteiro)\n");
    printf("C (casado)\n");
    printf("D (divorciado)\n");
    printf("V (viuvo)\n");
    printf("------> ");
    c = getchar();
    c = toupper(c);
    switch(c){
    case 'S':
        printf("Voce eh solteiro!");
        break;
    case 'C':
        printf("Voce eh casado!");
        break;
    case 'D':
        printf("Voce eh divorciado!");
        break;
    case 'V':
        printf("Voce eh viuvo!");
    default:
        printf("Opcao invalida!");
        break;
    }
    getchar();
}
/* 
    87. Escreva um programa que leia u m carac tere correspondente ao estado civil de uma 
    pessoa e imprima o estado civil informado por extenso. As opções para o estado civil 
    são: S (solteiro), C (casado), D (divorciado) e V (viúvo).  
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main()
{
    
    char c;
    printf("Informe seu estado civil. Abaixo est�o as op��es disponiveis.\n");
    printf("S (solteiro)\n");
    printf("C (casado)\n");
    printf("D (divorciado)\n");
    printf("V (viuvo)\n");
    printf("------> ");
    c = getchar();
    c = toupper(c);
    switch(c){
    case 'S':
        printf("Voce eh solteiro!");
        break;
    case 'C':
        printf("Voce eh casado!");
        break;
    case 'D':
        printf("Voce eh divorciado!");
        break;
    case 'V':
        printf("Voce eh viuvo!");
    default:
        printf("Opcao invalida!");
        break;
    }
    getchar();
}
