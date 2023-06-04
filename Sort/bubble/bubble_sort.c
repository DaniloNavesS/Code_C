#include <stdio.h>
#include <stdlib.h>

void bubble(int vetor[], int l, int r)
{
    int j = 0;
    int swap = 1;
    while (swap == 1)
    {
        swap = 0;
        for (int i = r - 1; i > 0; i--)
        {
            if (vetor[i] < vetor[i - 1])
            {
                int aux = vetor[i];
                vetor[i] = vetor[i - 1];
                vetor[i - 1] = aux;
                swap = 1;
            }
        }
    }
}

int main()
{
    int vetor[] = {4, 2, 5, 6, 7, 4, 1};
    bubble(vetor, 0, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", vetor[i]);
    }
    return 0;
}

//Complexidade assintótica
    // n^2 / 2, melhor caso N(0);
//Estabilidade
    //Sim, mantém a ordem, sendo assim, ele é estável
//Adaptabilidade
    //No melhor caso sim.