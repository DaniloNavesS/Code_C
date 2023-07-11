#include <stdio.h>
#include <stdlib.h>

//Lista encadeadas
typedef int Item;
typedef struct registro node;
struct registro
{
    Item info;
    node *prox;
};
//Fila
typedef struct fila
{
    int *dados;
    int N, p, u;
} fila;

//Pilha

typedef struct pilha_t Pilha;

struct pilha_t {
    Item *item;
    int topo;
};

typedef struct arvoreBinaria Arvore;

struct arvoreBinaria {
    Item dado;
    Arvore dir;
    Arvore Esq;
};
