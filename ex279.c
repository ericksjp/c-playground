/* 
    279. Escreva um programa que lei a vário s números inteiros até ler o número 0, que não 
    deverá ser processado. Após finalizar a leitura, o programa deve imprimir todos os 
    números lidos na ordem inversa a que eles foram digitados pelo usuário.  
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int numero;
    struct nodo* proximo; //esperase que o ponteiro aponte para objetos do tipo nodo
} Nodo;

typedef struct{
    Nodo* topo; //esperase que o ponteiro aponte para objetos do tipo Nodo
} Pilha;

Pilha* criarpilha()
{
    Pilha *p = (Pilha*)malloc(sizeof(Pilha)); //malloc retorna um ponteiro sem tipo, por isso é preciso fazer o casting para especificar o tipo desse ponteiro, para indicar para que tipo de coisa o ponteiro aponta
    p->topo = NULL; //seta o ponteiro que aponta para o objeto topo do tipo Pilha
    return p; //retorna esse ponteiro
}

void push(Pilha *p, int n)
{
    Nodo *novo = (Nodo*)malloc(sizeof(Nodo)); //aloca memoria para a criação de um Tipo Nodo, e retorna o ponteiro para onde esse espaço de memoria esta armazenado.
    novo->numero = n; //insere o numero informado dentro do meu no
    novo->proximo = p->topo; //encadeia minha pilha, fazendo com que o ponteiro proximo do no aponte para outro no ou para Nulo caso o no seja o primeiro a ser criado
    p->topo = novo; //faz com que o topo da pilha seja sempre o ultimo no criado
}

int pop(Pilha* p) {
    Nodo* aux = p->topo;  // Salva o topo atual da pilha em 'aux'
    int resultado = aux->numero;  // Obtém o número do nodo no topo
    p->topo = aux->proximo;  // Atualiza o topo para o próximo nodo da pilha
    free(aux);  // Libera a memória alocada para o nodo no topo
    return resultado;  // Retorna o número do nodo removido
}

void imprimir(Nodo *p){
    if (p!=NULL){
        int num = p->numero;
        printf("%d\n",num);
        imprimir(p->proximo);
    }
}

int estavazia (Pilha *p)
{
    if (p->topo==NULL){
        return 1;
    }
    return 0;
}

int TAM(Nodo *inicio)
{
    if (inicio==NULL){
        return 0;
    } else {
        return 1 + TAM(inicio->proximo);
    }
}

int acumulador (Nodo *inicio)
{
    if (inicio==NULL){
        return 0;
    } else {
        int num = inicio->numero;
        return num + acumulador(inicio->proximo);
    }
}

int repet (Nodo *p, int num)
{
    if (p==NULL){
        return 0;
    } else {
        int num_p = p->numero;
        if (num_p==num){
            return 1 + repet(p->proximo, num);
        } else{
            return 0 + repet(p->proximo, num);
        }
    }
}

int maior (Nodo *p)
{
    int num = p->numero;
    while (p!=NULL){
        if (p->numero>num){
            num = p->numero;
        }
        p = p->proximo;
    }
    return num;
}

int main()
{
    Pilha *ponteiro = criarpilha();

    int num = 1;
    while (num!=0){
        printf("Informe um numero para inserir na pilha -> ");
        scanf("%d",&num);
        if (num!=0){
            push(ponteiro,num);
        }
    }

    Nodo *point = ponteiro->topo;

    printf("\n---Numeros inseridos na pilha---\n");

    imprimir(point);

    // int cont = TAM(point);
    // int acc = acumulador(point);
    int repets = repet(point,5);
    int mai = maior(point);
    // printf("\nContado ----> %d",cont);
    // printf("\nAcumulador -> %d",acc);
    // printf("\nMaior -> %d",mai);
    // printf("\nRepeticoes -> %d",repets);

    // int verificador = estavazia(ponteiro);
    // while (verificador==0){
    //     int numero_Pilha = pop(ponteiro);
    //     verificador = estavazia(ponteiro);
    //     printf("%d\n",numero_Pilha);
    // }
}


