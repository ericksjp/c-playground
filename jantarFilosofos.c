#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

typedef enum {
  PENSANDO = 0,
  COMENDO = 1,
} acao;

pthread_t *filosofos;
pthread_mutex_t *garfos;

void agir(int i, acao a) {
  const char *str = a == PENSANDO ? "pensando" : "comendo";
  printf("Filosofo %d esta %s!\n", i + 1, str);

  // gerando um tempo aleatorio para acao do filosofo
  sleep(1 + rand() % 10);
}

void *filosofo(void *arg) {
  int size = *(int *)arg;
  int i = 0, garfoE, garfoD;

  // identificando a posicao do filosofo
  while (pthread_equal(*(filosofos + i), pthread_self()) != 1 && i < size) {
    i++;
  }

  while (1) {
    // botando o filosofo pra pensar
    agir(i, PENSANDO);

    // calculando a posicao dos garfos
    garfoE = (i + 1) % size;
    garfoD = i;

    // travando os garfos
    pthread_mutex_lock(garfos + (garfoE > garfoD ? garfoE : garfoD));
    pthread_mutex_lock(garfos + (garfoE < garfoD ? garfoE : garfoD));

    // botando o filosofo pra comer
    agir(i, COMENDO);

    // liberando os garfos
    pthread_mutex_unlock(garfos + garfoE);
    pthread_mutex_unlock(garfos + garfoD);
  }

  return NULL;
}

int main() {

  int quantidade, i;
  printf("Informe o numero de filosofos na mesa: ");
  scanf("%d", &quantidade);

  // alocando espaço
  filosofos = (pthread_t *)malloc(quantidade * sizeof(pthread_t));
  garfos = (pthread_mutex_t *)malloc(quantidade * sizeof(pthread_mutex_t));

  // iniciando os garfos com exlução mutua
  for (i = 0; i < quantidade; i++) {
    pthread_mutex_init(&garfos[i], NULL);
  }

  // criando as threads
  for (i = 0; i < quantidade; i++) {
    pthread_create(&filosofos[i], NULL, filosofo, &quantidade);
  }

  // destruindo threads
  for (int i = 0; i < quantidade; i++) {
    pthread_join(filosofos[i], NULL);
  }

  // destruindo garfos
  for (int i = 0; i < quantidade; i++) {
    pthread_mutex_destroy(&garfos[i]);
  }

  // desalocando espaço
  free(filosofos);
  free(garfos);

  return 0;
}
