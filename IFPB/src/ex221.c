/* 
    221. Escreva um programa que leia um número inteiro entre 0 e 999 e calcule o seu 
    reverso.  
    
    Você d eve sempre considerar que o número lido tem três algarismos. Desta 
    forma, o reverso de 195 deve ser 591, o de 768 deve ser 867, de 3 deve ser 300, o de 
    40 deve ser 40, o de 500 deve ser 5, e assim sucessivamente. O programa deve 
    armazenar o valor do  revers o em uma variável antes de exibi -lo para o usuário.  
    
    O valor do reverso deve ser calculado através de um subprograma.  
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverso(int num) {
    int isNegative = num < 0 ? 1 : 0;
    if (isNegative) num *= -1;

    int quantidadeAlga = 1;
    int copy = num;
    while (copy > 9) {
        copy /= 10;
        quantidadeAlga++;
    }

    char numSTR[quantidadeAlga + 1];
    sprintf(numSTR, "%d", num);
    
    int c2 = quantidadeAlga - 1;
    for (int c = 0; c < quantidadeAlga / 2; c++) {
        char temp = numSTR[c];
        numSTR[c] = numSTR[c2];
        numSTR[c2] = temp;
        c2--;
    }

    if (isNegative) return atoi(numSTR) * -1;
    return atoi(numSTR);
}

int main() {
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    int numReverso = reverso(num);
    printf("O numero reverso a %d eh %d\n", num,numReverso);

    return 0;
}