#include <stdio.h>

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
void shell_sort(int vetor[], int l, int r)
{
    
}

int main()
{
    int vetor[] = {6, 5, 4, 3, 2, 1};
    printa_vetor(vetor, 6);
    shell_sort(vetor, 0, 6);
    printa_vetor(vetor, 6);
    return 0;
}