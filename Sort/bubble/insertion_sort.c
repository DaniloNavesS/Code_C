#include <stdio.h>

//----Constantes----//
// #define tam = 6;

//--------------------------------------//

//----Funções globais----//
void printa_vetor(int vetor[], int TAM)
{
    for (int i = 0; i < TAM; i++)
    {
        printf("%d\n", vetor[i]);
    }
    printf("FIM\n");
}
//--------------------------------------//
void insertion_sort(int vetor[], int TAM)
{
    for (int i = 1; i < TAM; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (vetor[j - 1] > vetor[j])
            {
                int aux = vetor[j];
                vetor[j] = vetor[j - 1];
                vetor[j - 1] = aux;
            }
        }
    }
}

int main()
{
    int vetor[] = {6, 5, 4, 3, 2, 1};
    printa_vetor(vetor, 6);
    insertion_sort(vetor, 6);
    printa_vetor(vetor, 6);
    return 0;
}
    
//Complexidade assintótica
    // Melhor caso: N² / 2;
    // Meído caso: N² / 4
    // Pior caso: N-1 e 0 comparações
//Estabilidade
    //Estável, pois mantém a ordem
//Adaptativo
    //Sim, aproveita a ordençaõ do vetor
//In-place
    //Sim, não utiliza memoria extra e nem estruturas externas

    