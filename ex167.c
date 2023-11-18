/* 
    167. Escreva um programa que leia um vetor de dez números i nteiros  e ordene o vetor 
    lido em ordem crescente.  
*/
#include <stdio.h>

void erickSort(int vetor[], int termos) {

    int vetor2[termos-1];
    //looping pegar cada valor do vetor individualmente (V)
    for (int c=0; c<termos; c++){
        int maior_igual=0;
        int repeticoes = 0;

        //looping para pegar V e comparalo com todos os termos do array, inclusive ele mesmo.
        for (int c2=0; c2<termos; c2++){

            //condi��o para contar quantas vezes V se repete no array (vai se repetir no minimo 1 vez, porque vai ser comparado com ele mesmo)
            if (vetor[c]==vetor[c2]){
                repeticoes++;
            }

            //condi��o para contar quandos vezes V � maior ou igual aos outros termos do array (vai ser maior no minimo 1 vez, porque vai ser comparado com ele mesmo)
            if (vetor[c]>=vetor[c2]){
                maior_igual++;
            }
        }

        // looping que vai posicionar V em um segundo vetor de acordo com o numero de repeti��es e o numero de vezes que � maior do que os outros termos do array
        while (repeticoes>0){
            vetor2[maior_igual-repeticoes]=vetor[c];
            repeticoes--;
        }
    }
    for (int c=0; c<termos; c++){
        vetor[c]=vetor2[c];
    }

}

int main()
{
    int quantidade;

    printf("Informe a quantidade de termos do vetor: ");
    scanf("%d",&quantidade);

    printf("\n");

    int vetor[quantidade-1];

    for (int c=0; c<quantidade; c++){
        int num;
        printf("Informe o %d valor do vetor: ",c+1);
        scanf("%d",&num);
        vetor[c]=num;
    }

    printf("\n");
    //erickSort(vetor);

    printf("Vetor na ordem em que foi digitado: \n[");
    for (int i = 0; i < quantidade; i++) {
            printf(" %d ", vetor[i]);
            if (i<quantidade-1){
                printf(",");
            }
        }
    printf("]");

    printf("\n\n");

    erickSort(vetor,quantidade);
    printf("Vetor em ordem crescente: \n[");
    for (int i = 0; i < quantidade; i++) {
            printf(" %d ", vetor[i]);
            if (i<quantidade-1){
                printf(",");
            }
        }
    printf("]");
    return 0;
}
