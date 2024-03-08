/* 
    222. O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele 
    financia qualquer valor em 5 prestações. O valor d a prime ira prestação corresponde 
    à 20% do valor do empréstimo. Os valores das demais prestações correspondem ao 
    valor da parcela anterior acrescido de uma taxa de juros de 7%. Escreva um 
    programa que leia o valor a ser financiado por um cliente e calcule: o valor  de cada 
    prestação, o valor total que o cliente vai pagar pelo empréstimo e o total de juros 
    que o cliente vai pagar pelo empréstimo. O programa deve ter um subprograma para 
    calcular o valor de cada parcela do empréstimo.  
*/
#include <stdio.h>

float valorPrimeiraParcela(float valor) {
    return 20 * valor / 100;
}

float valorParcela(float valor) {
    return 7 * valor / 100;
}

void calcValorParcelas(int valor, int quantidade, float parcelasArr[]) {
    parcelasArr[0] = valorPrimeiraParcela(valor);

    int c;  
    for (c = 1; c < quantidade; c++) {
        parcelasArr[c] = valorParcela(parcelasArr[c - 1]) + parcelasArr[c - 1];
    }
}

float total(float parcelasArr[], int quantidadeParcelas) {
    float total = 0;
    for (int c = 0; c < quantidadeParcelas; c++) {
        total += parcelasArr[c];
    }

    return total;
}


int main() {
    float valor;
    int quantidadeParcelas;
    printf("Informe o valor a ser pegado emprestado: ");
    scanf("%f", &valor);
    printf("Informe em quantas parcelas deseja pagar: ");
    scanf("%d", &quantidadeParcelas);

    float parcelasValores[quantidadeParcelas];
    calcValorParcelas(valor, quantidadeParcelas, parcelasValores);

    for (int c = 0; c < quantidadeParcelas; c++) {
        printf("Valor da %dra parcela: R$%.2f\n", c + 1, parcelasValores[c]);
    }

    float valorTotal = total(parcelasValores, quantidadeParcelas);

    printf("-------------------------------------------------\n");
    printf("Valor total a ser pago: R$%.2f \n", valorTotal);
    printf("Valor de juros a ser pago: R$%.2f\n", valorTotal - valor);

    return 0;
}