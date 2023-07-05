#include <stdio.h>
#include <stdlib.h>

int const TAM = 7;

void couting_sort (int *vetor) {
    int count[9];
    int vetorSort[7];
    int aux;

    for (int i = 0; i < TAM; i++)
    {
         aux = vetor[i];
         count[aux] +=1;
    }
    for (int j = 1; j <= 9; j++)
    {
        count[j] = count[j-1] + count[j];
    }

    for (int i = 0; i < TAM; i++)
    {
        int aux;
        aux = vetor[i];
        count[aux]  
    }
    
    
} 

int main () {
    int vetor[] = {1,4,1,2,7,5,2};
    return 0;
}

