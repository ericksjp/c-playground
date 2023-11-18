/* 
    278. Escreva u m progr ama que leia vários números inteiros até ler o número 0, que não 
    deverá ser processado. Após finalizar a leitura, o programa deve imprimir todos os 
    números lidos na ordem inversa a que eles foram digitados pelo usuário.  
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int numero;
    struct nodo* proximo;
} Nodo;

typedef struct{
    Nodo* topo;
} Pilha;

Pilha* criarpilha(){
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

void push(Pilha *p, int n){
    Nodo *novo = (Nodo*)malloc(sizeof(Nodo));
    novo->numero = n;
    novo->proximo = p->topo; 
    p->topo = novo;
}

void imprimir(Nodo *p){
    if (p!=NULL){
        printf("%d",p->numero);
        imprimir(p->proximo);
    }
}


int main(){
    Pilha *pilha = criarpilha();

    int num;
    printf("Informe um numero -> ");
    scanf("%d",&num);

    while (num>0){
        int resto = num%2;
        push(pilha,resto);
        num/=2;
    }
    printf("\n\n");
    imprimir(pilha->topo);
    return 0;
}
