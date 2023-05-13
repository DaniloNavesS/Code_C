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
    char valor =pi->pilha[--pi->t];
    return valor; 
}


int main () {
    int i;
    char palavra[500];
    pilha *p = pi(500);
    scanf("%s", palavra);

    for (i = 0; palavra[i] != '\0' ; i++)
    {
        empilhar(p, palavra[i]); 
    }

    for (i = i; i >= 0 ; i--)
    {
       printf("%c",desempilhar(p));
    }
    printf("\n");

    free(p->pilha);
    free(p);
} 