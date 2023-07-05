#include <stdio.h>
#include <stdlib.h>

void printa_vetor(int vetor[], int TAM)
{
    for (int i = 0; i < TAM; i++)
    {
        printf("%d\n", vetor[i]);
    }
    printf("FIM\n");
}

int main()
{
    int vetor[] = {6, 5, 4, 3, 2, 1};
    printa_vetor(vetor, 6);
    merge_sort(vetor, 0,6);
    printa_vetor(vetor, 6);
    return 0;
}

void merge (int v[], int l, int m, int r) {
    //Tamanho do vetor
    int tam = r+1-l;
    //Alocar mémoria do vetor auxiliar
    int *aux = malloc(tam * sizeof(int));
    //Variaveis auxiliares
    int i = l; //Vetor do lado esquedo
    int j = m+1; //inicio do vetor esquerdo
    int k = 0; //Auxiliar para percorrer o vetor;
    //////////////
    while (k < tam) //Rodar o vetor; e ordenada metade dos vetores
    {
        if (i>m)
            aux[k++] = v[j++];
        else if (j > r)
            aux[k++] = v[i++];
        else if (v[i] < v[j])
        {
            aux[k++] = v[i++];
        }
        else 
            aux[k++] = v[j++];
        //Copia vetor aux para vetor original
        k = 0;
        for (i = l; i <= r; i++)
            v[i] = aux[k++];
    }    
    //Libera memoria
        free(aux);
}

void merge_sort(int *v, int l, int r) 
{
    if (l >= r) return;
    int m = (r+l)/2;
    merge_sort(v,l,m);
    merge_sort(v,m+1,r);
    merge(v, l, m, r);
}
    
//Complexidade assintótica
    //Entre 1/2 N log N a N log N comparações
    //Pior caso, melhor caso, caso médio = O(n log n);
//In-place 
    //Não, pois usa estruturas externas;
//Adaptativo
    //Não, ele não mantém a ordem
//Estabilidade
    //Sim, ele aproveita a ordenação; pré-ordenação;
//Recomendações
    //Caso espaço seja um problema, não use merge
    //Usar insertion sort quando o vetor estiver perto de
        //15 itens ou menos.
        //Ajuda cerca de 15%.
    //Usar aux no merge sort, não no merge