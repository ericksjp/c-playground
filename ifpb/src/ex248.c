/* 
    248. Escreva um  programa que leia um valor real a ser sacado pelo usuário e identifique 
    quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. Você 
    pode supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O 
    valor máxim o de um  saque é R$ 1000,00 e, para cada saque, deve ser dada 
    prioridade para as células maiores.  
    
    A verificação deve ser realizada através de um subprograma.  
*/
#include <stdio.h>

void cedulasSaque(float valor) {
    float troco = 0;

    if (valor > 1000) {
        troco = valor - 1000;
        valor = 1000;
    }

    int cedulasCEM = 0;
    while (valor >= 100) {
        valor -= 100;
        cedulasCEM++;
    }

    int cedulasCINQUENTA = 0;
    while (valor >= 50) {
        valor -= 50;
        cedulasCINQUENTA++;
    }

    int cedulasVINTE = 0;
    while (valor >= 20) {
        valor -= 20;
        cedulasVINTE++;
    }

    int cedulasDEZ = 0;
    while (valor >= 10) {
        valor -= 10;
        cedulasDEZ++;
    }

    printf("Cedulas de 100 a serem sacadas: %d\n", cedulasCEM);
    printf("Cedulas de  50 a serem sacadas: %d\n", cedulasCINQUENTA);
    printf("Cedulas de  20 a serem sacadas: %d\n", cedulasVINTE);
    printf("Cedulas de  10 a serem sacadas: %d\n", cedulasDEZ);

    troco += valor;

    if (troco > 0) {
        printf("---------------------------------------------\n");
        printf("Troco: R$ %.2f\n", troco);
    }
}

int main() {
    float valor;
    printf("Informe o valor a ser sacado: ");
    scanf("%f", &valor);

    printf("\n");
    cedulasSaque(valor);

    return 0;
}