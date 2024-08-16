#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>

// use essa flag na hora de compilar o codigo com o gcc (-pthread)
// ~$ gcc -pthread jantarFilosofos.c -o jantarFilosofos

pthread_t *philosophers;
pthread_mutex_t *forks;

int size = 5;


void eat(int i){

	printf("Filosofo %d esta comendo\n",i+1);

	sleep(1 + rand()%10);
}

void* philosopher(void* args){
	int i = 0,first,second;
	while(!pthread_equal(*(philosophers+i),pthread_self()) && i < size){
		i++;
	}

	while(1){

		printf("Filosofo %d esta pensando\n",i+1);

		sleep(1 + rand()%10);
		
		first = i;
		second = (i+1)%size;

		pthread_mutex_lock(forks + (first>second?second:first));
		pthread_mutex_lock(forks + (first<second?second:first));
		eat(i);
		pthread_mutex_unlock(forks+first);
		pthread_mutex_unlock(forks+second);
	}

	return NULL;
}


int main(void){
	int i,err;
	srand(time(NULL));
	philosophers = (pthread_t*) malloc(size*sizeof(pthread_t));
	forks = (pthread_mutex_t*) malloc(size*sizeof(pthread_mutex_t));

	for(i=0;i<size;++i)
		if(pthread_mutex_init(forks+i,NULL) != 0){
			printf("deu ruiam ao inicializar o fork %d :(\n",i+1);
			return 1;
		}

	for(i=0;i<size;++i){
		pthread_create(philosophers+i,NULL,&philosopher,NULL);
	}

	for(i=0;i<size;++i)
		pthread_join(*(philosophers+i),NULL);

	free(philosophers);
	free(forks);

	return 0;
}