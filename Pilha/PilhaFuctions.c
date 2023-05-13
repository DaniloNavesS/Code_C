#include <stdio.h>
#include <stdlib.h>

typedef struct pilha 
{
    char *pilha;
    int t;
}pilha;

pilha *pi(int N) {
    pilha *p = malloc(sizeof(*p));
    p->pilha = malloc((2*N) * sizeof(char));
    p->t = 0;
    return p;
}

void empilhar(pilha *pi, char x) {
    pi->pilha[pi->t++] = x; 
}

char desempilhar(pilha *pi) {
    char valor =pi->pilha[pi->t--];
    return valor; 
}