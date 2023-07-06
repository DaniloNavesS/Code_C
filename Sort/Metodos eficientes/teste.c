#include <stdio.h>
#include <stdlib.h>

#define less(A, B) (A < B)

typedef struct Arvore STnode;
typedef int Item;
typedef int Key;

struct Arvore {
    Item dado;
    STnode *esquerdo;
    STnode *direito;
};

STnode *new(Item x, STnode *d, STnode *e) {
    STnode *no = malloc(sizeof(STnode));
    no->dado = x;
    no->direito = d;
    no->esquerdo = e;
    return no;
}

STnode *Insert(STnode *no, Item x) {
    if (no == NULL) return new(x, NULL, NULL);
    Key atual = no->dado;
    Key nova = x;
    if (less(atual, nova)) no->esquerdo = Insert(no->esquerdo, x);
    else no->direito = Insert(no->direito, atual);
    return no;
}



int main () {
    STnode *arvore = new(10, NULL, NULL);
    Insert(arvore, 8);
    printf("%d", arvore->esquerdo->dado);
}





/*int N,M, Numeros[10000], Busca[10000];
    for (int i = 0; i < N; i++)
        scanf("%d", &Numeros[i]);
    for (int i = 0; i < M; i++)
        scanf("%d", &Busca[i]);
    return 0;*/