#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void *enfileira(celula *f, int x);

void *enfileira(celula *f, int x)
{
    celula *nova = malloc(sizeof(celula));
    nova->dado = x;
    if (f->prox == NULL)
    {
        f->prox = nova;
        nova->prox = f;
        return f;
    }
    else
    {
        nova->prox = f->prox;
        f->prox = nova;
        return f;
    }
    return NULL;
}
