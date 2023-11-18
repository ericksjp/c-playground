/* 
    242. Escreva um programa que leia dois operandos inteiros e um operador (+, -, *, /) e 
    aplique o operador lido aos dois operandos, na ordem em que os mesmos foram 
    digitados. Esta verificação deve ser realizada através de um subprograma.  
*/
#include <stdio.h>

int operacao (int num1, int num2, char operador) {
    int result;
    switch(operador) {
        case '+': 
            result = num1 + num2;
            break;
        case '-': 
            result = num1 - num2;
            break;
        case '/': 
            result = num1 / num2;
            break;
        case '*': 
            result = num1 * num2;
            break;
        default: 
            result = 0;
    }

    return result;
}

int main() {
    int num1,num2;
    char operador;
    printf("Informe o primeiro operando: ");
    scanf("%d", &num1);
    printf("Informe o segundo operando : ");
    scanf("%d", &num2);    
    while(getchar() != '\n');
    printf("Informe o operador: ");
    operador = getchar();

    int result = operacao(num1,num2,operador);

    printf("\nResultado: %d\n", result);

    return 0;
}