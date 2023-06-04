#include <stdio.h>

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
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main () {
    int entrada;
    int vetor[1000];
    int i = 0;
    while (scanf("%d", &entrada) != EOF)
    {
        vetor[i] = entrada;
        i++;
    }
    selection_sort(vetor,0, i);
    printa_vetor(vetor,i);

    return 0;
}

