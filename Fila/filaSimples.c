#include <stdio.h>
#include <stdlib.h>

//Fila
#define N 7

int vetor[N];
int p, u;

void vazia () {
    p>= u;
}

enfileira(int x) {
    vetor[u++] = x;
    if (u == N) u = 0;
    
}
desifileira() {
    int x = vetor[p++];
    if (p == N) p = 0;
    return x;
}

int main () {
    enfileira(10);
    enfileira(20);
    enfileira(30);
    printf("%d\n", desifileira());
    printf("%d\n", desifileira());
    printf("%d\n", desifileira());

    return 0;
}


