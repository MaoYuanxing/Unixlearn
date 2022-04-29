#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

#define N 2

char **ptr; /* Global varible */

void *thread(void *vargp);

int main()
{
    int i;
    pthread_t tid;
    char *msg[N] = {
        "Hello first ! ",
        "Hello second !"};

    ptr = msg;

    for (i = 0; i < N; ++i)
    {
        pthread_create(&tid, NULL, thread, (void *)i);
    }
    pthread_exit(NULL);
}

void *thread(void *vargp)
{
    int myid = vargp;
    static int cnt = 0;

    printf("thread %d : %s (cnt = %d)\n", myid, ptr[myid], ++cnt);

    return NULL;
}