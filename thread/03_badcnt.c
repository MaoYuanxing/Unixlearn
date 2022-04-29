#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

void *thread(void *vargp);

unsigned int iters = 10000000;

unsigned int cnt = 0;

int main()
{
    pthread_t tid1, tid2;

    pthread_create(&tid1, NULL, thread, NULL);
    pthread_create(&tid2, NULL, thread, NULL);

    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    if (cnt != iters * 2)
        printf("BOOM, cnt = %d\n", cnt);
    else
        printf("OK cnt = %d\n", cnt);
}

void *thread(void *vargp)
{
    int i = 0;

    for (; i < iters; ++i)
        cnt++;

    return NULL;
}