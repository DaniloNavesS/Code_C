#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//Type def
typedef int Item;
//Macros
#define key(A) A
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t=A; A=B; B=t; }
#define compexch(A, B) if(less(B, A)) exch(A, B)
//Funções gerais
void show(int v[], int l, int r); // Mostra vetor
//Funções da Fila de prioridade
void PQinit(int maxN); // Criar lista de prioridade
void PQempty(); //Testar se está vazia
void PQinsert(Item v); //insere uma chave
PQdelmax(); //Retornar e remover a maior chave


//Criação da fila 
static Item *pq; //Criação da lista
static int N; // Quantidade de elementos da lista

int main () {

    return 0;
}

//Funções da Fila de prioridade
void PQinit(int MaxN) {
    pq = malloc(sizeof(Item) * MaxN+1);
    N = 0;
}

void PQempty() { 
    return N==0;
}
//
void fixUP (int k) { // K e a posição: Sobe verificando ate a raiz. verificando se filho e maior que seus pais e avos.
    while (k>1 && less(pq[k/2], pq[k]))
    {
        exch(pq[k], pq[k/2]);
        k = k/2;
    }
}
//Pega a posição K e desce o elemento ate o N. N = Taxamnho máximo
void fixDown(int k, int N) {
    int j;
    while (2*k <= N)
    {
        j=k*2;
        //Troque com o maior filho
        if (j<N && less(pq[j], pq[j+1])) j++;
        //se p[k] não precisa descer mais, pare
        if (!less(pq[k], pq[j])) break;
        //Senão, afunde;
        exch(pq[k], pq[j]);
        k = j;
    }
    
}

void PQinsert(Item v) {
    pq[++N] = v;
    fixUP(N);
}

Item PQdelmax() {
    //Troque o ultímo elemento pelo topo
    exch(pq[1], pq[N]);
    //Reposiciona o último
    fixDown(1, N-1);
    //Devolve o máximo
    return pq[N--];
}


//----- Heap sort -----
void heap_sort (Item *v, int l, int r) {
    pq = v+l-1;
    N = r-l+1;
    for (int k=N/2; k >=1; k--)
    {
        fixDown(k, N);
    }
    
}

//Funções gerais
void show(int v[], int l, int r){
    for(int i=l; i<=r; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}