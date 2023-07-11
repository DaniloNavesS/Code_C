#include <stdio.h>
#include <stdlib.h>

typedef struct fila
{
    int *dados;
    int N, p, u;
} fila;

fila *criarFila(int tamanho) {
    fila *f = malloc(sizeof(fila));
    f->N = tamanho;
    f->dados = malloc(sizeof(f->dados) * f->N);
    f->p = 0;
    f->u = 0;
    return f;
}

void *enfilerar(fila *f, int x ) {
    f->dados[f->p++] = x;
    if (f->u == f->N) f->u = 0;
}
int desifileirar(fila *f) {
    int x = f->dados[f->u++];
    if (f->p == f->N) f->p = 0;
    return x;
}

int main () {
    fila *f = criarFila(10);
    enfilerar(f, 45);
    enfilerar(f, 85);
    printf("%d\n", desifileirar(f));
    printf("%d\n", desifileirar(f));
    return 0;
}