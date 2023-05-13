#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

typedef struct fila
{
    int *dados;
    int N, p, u;
} fila;

fila *criar(int tamanho)
{
    fila *Fila = malloc(sizeof *Fila);
    Fila->N = tamanho;
    Fila->dados = malloc(Fila->N * sizeof(Fila->dados)); // Conter erro;
    Fila->p = 0;
    Fila->u = 0;
}

int vazia(fila *Fila)
{
    return Fila->p == Fila->u;
}

void *enfileira(fila *Fila, int y)
{
    if (Fila->N == Fila->u)
    {
        printf("A lista está cheia");
        return 0;
    }
    Fila->dados[Fila->p++] = y;
}

int desenfileira (celula *f, int *y) { //Lista encadeada
    if (f->prox == NULL) //A lista está vazia
    {
        return 0;
    }
    *y = f->prox->dado;
    f->prox = f->prox->prox;
    return 1;
}

int main()
{
    fila *fila = criar(3);
    printf("A lista está: %d\n", vazia(fila));
    enfileira(fila, 6);
    enfileira(fila, 15);
    enfileira(fila, 17);
    enfileira(fila, 19);
    enfileira(fila, 24);
    enfileira(fila, 24);
    enfileira(fila, 24);
    enfileira(fila, 24);
    printf("%d\n", desefileira(fila));
    printf("A lista está: %d\n", vazia(fila));
    printf("%d\n", desefileira(fila));
    printf("A lista está: %d\n", vazia(fila));
    printf("%d\n", desefileira(fila));
    printf("A lista está: %d\n", vazia(fila));
    printf("%d\n", desefileira(fila));

    return 0;
}