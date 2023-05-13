#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int *dados;
    int p;
    int u;
} fila;

fila *CriarFila (int N) {
    fila *f = malloc(sizeof(fila));
    f->dados = malloc(2 * N * sizeof(int));
    f->p = 0;
    f->u = 0;
    return f;
}

int main () {
    int N;
    scanf("%d", &N);
    fila *f = CriarFila(N+1);
    //Cria uma fila para as cartas
    for (int i = 1; i <= N; i++)
    {
        f->dados[f->p++] = i;
    }
    printf("Cartas descartadas: ");
    //Comeca a descartar as cartas
    for (int i = 1; i < N-1 ; i++)
    {
        int valor = f->dados[f->u++];
        printf("%d, ", valor);
        f->dados[f->p++] = f->dados[f->u++];
    }
    printf("%d", f->dados[f->p++] = f->dados[f->u++]);
    printf("\n");

    int valor = f->dados[f->u++];
    printf("Carta restante: %d\n", valor);

    free(f->dados);
    free(f);

    return 0;
}