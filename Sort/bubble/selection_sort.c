#include <stdio.h>
#include <stdlib.h>

void selection_sort (int vetor[], int l, int r){
    int posição;
    for (int i = 0; i < r; i++) {
        int menor = vetor[i];
        for (int j = i+1; j < r; j++)
        {
            if (menor >= vetor[j] )
            {
                menor = vetor[j];
                posição = j;
                printf("J:%d, menor:%d\n", posição, menor);
            }
        }
    int aux = vetor[i];
    vetor[i] = menor;
    vetor[posição] = aux;
    }
    
}

void printa_vetor(int vetor[], int TAM) {
    for (int i = 0; i < TAM; i++)
    {
        printf("%d\n", vetor[i]);
    }
    printf("FIM\n");
}

int main () {
    int vetor[] = {5,6,1,1,1,1,1,3,2,4,4};
    printa_vetor(vetor,11);
    selection_sort(vetor,0, 11);
    printa_vetor(vetor,11);

    return 0;
}

//Complexidade assintótica
   // Cerca de n^2 / 2; e N trocas, O(N^2);
//Adaptativo
    //Não adaptativa, porque ocorre saltos
//Estavél
    //Não estável porque não reutiliza pre-ordenações
//In-place
    /*Sim, porque a ordenação é feita modificando
    os próprios elemento do vetor-array*/