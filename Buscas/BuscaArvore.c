#include <stdio.h>
#include <stdlib.h>

#define less(A, B) (A < B)
#define equals(A, B) (A == B)
//#define NULLitem ((Item){})

typedef int Item;
typedef int Key;

typedef struct node STnode;
//Estrutura da arvore
struct node
{
    Item item;
    STnode *direita;
    STnode *esquerda;
};
//Criar a Árvore
STnode *new(Item x, STnode *d, STnode *e) {
    STnode *no = malloc(sizeof(STnode));
    no->direita = d;
    no->esquerda = e;
    no->item = x;
    return no;
}
//Busca binária
Item *searchBinary (STnode *no, Key v) {
    Key t = no->item;
    if(no == NULL) return NULL;
    if (equals(t,v)) return no->item;
    if (less(t,v)) return searchBinary(no->esquerda, t);
    else return searchBinary(no->direita, t);
}
//Inserção em árvore binaria
STnode *Insert (STnode *no, Item item) {
    if (no == NULL) return new(item, NULL, NULL);
    Key atual = no->item; //10
    Key novo = item; //8
    if (less(atual, novo)) no->esquerda = Insert(no->esquerda, item) ;
    else no->direita = Insert(no->direita, atual);
    return no;
}
//deleta o no
STnode *deleta (STnode *no, Key remove) {
    if (no == NULL) return NULL;
    
    Key atual = no->item;


    if (less(remove, atual)) no->esquerda = deleta(no->esquerda, remove);
    else if (less(atual, remove)) no->direita = deleta(no->direita, remove);

    
    
    
}













int main () {

    return 0;
}

