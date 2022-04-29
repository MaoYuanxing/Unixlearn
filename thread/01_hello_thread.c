#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

void *thread(void *varph);

int main()
{
    pthread_t tid;
    pthread_create(&tid, NULL, thread, NULL);
    pthread_join(tid, NULL);
    exit(0);
}

void *thread(void *varph)
{
    printf("Hello Thread!  %ld\n", pthread_self());
    return NULL;
}