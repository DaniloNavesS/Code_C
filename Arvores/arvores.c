#include <stdio.h>
#include <stdlib.h>

typedef struct no {
int dado;
struct no *esq, *dir;
} no;

typedef struct pilha {
    int *dados;
    int N,p,u;
}pilha;

pilha *criarPilha (int Tam) {
    pilha *p = malloc(sizeof(pilha));
    p->N = Tam;
    p->dados = malloc((Tam*2) * sizeof(int));
}

void empilhar(int x) {
    pilha *p = criarPilha(25);
    x = p();
}


void em_ordem (no *raiz);
