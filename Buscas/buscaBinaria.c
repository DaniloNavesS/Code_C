#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    int conjunto[100000], numeros[100000];
    int buscaBinaria(int *vetor, int numeros, int l, int r);

    scanf("%d %d", &N, &M);
    // Enche os dados do vetor
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &conjunto[i]);
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d", &numeros[i]);
    }
    for (int j = 0; j < M; j++)
    {
        printf("%d\n", buscaBinaria(conjunto, numeros[j], 0, N-1));
    }
}

int buscaBinaria(int *vetor, int numeros, int l, int r)
{
    if (l > r) return -1;
    int meio = (l + r) / 2;
    if (vetor[meio] == numeros) return meio;
    if (vetor[meio] > numeros) return buscaBinaria(vetor, numeros, l, meio - 1);
    return buscaBinaria(vetor, numeros, meio + 1, r);
}