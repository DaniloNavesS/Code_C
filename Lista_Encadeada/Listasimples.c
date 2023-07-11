#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct registro node;
struct registro
{
    Item info;
    node *prox;
};

node *createList()
{
    node *no = malloc(sizeof(node));
    no->prox = NULL;
    return no;
}

void insertListInicio(node *no, Item x)
{
    node *p;
    p = no;
    node *nova;
    nova = malloc(sizeof(node));
    nova->info = x;
    nova->prox = p->prox;

    p->prox = nova;
}

void insertListForTheNumber(node *no, Item x, int y)
{
    node *p;
    p = no;
    node *nova = malloc(sizeof(node));
    nova->info = x;
    if (p->prox == NULL)
    {
        insertListInicio(no, x);
    }
    while (p->prox != NULL && p->prox->info != y)
        p = p->prox;
    nova->prox = p->prox;
    p->prox = nova;
}

void imprimir(node *p)
{
    if (p->prox != NULL)
    {
        printf("%d\n", p->prox->info);
        imprimir(p->prox);
    }
    if (p->prox == NULL)
        printf("NULL");
}

void removeList(node *no, Item x)
{
    node *p;
    p = no;
    node *lixo;
    while (p->prox != NULL && p->prox->info != x)
        p = p->prox;
    if (p->prox != NULL)
    {
        lixo = p->prox;
        p->prox = lixo->prox;
        free(lixo);
    }
}
int main()
{
    node *list = createList();
    insertListInicio(list, 120);
    insertListInicio(list, 11);
    insertListInicio(list, 106);
    insertListForTheNumber(list, 54, 120);
    removeList(list, 106);
    imprimir(list);
    return 0;
}