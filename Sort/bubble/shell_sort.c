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
void shell_sort(int v[], int l, int r)
{
    int h = 1;
    while(h < (r-l+1)/3) h = 3*h+1;

    while(h>=1){
        for(int i=l+h; i<=r; i++)
        {
            for(int j=i; j>=l+h && v[j]<v[j-h]; j-=h)
            {
                int a = v[j];
                v[j] = v[j-h];
                v[j-h] = a;
            }
        }
        h = h/3;
    }
}

int main()
{
    int vetor[] = {6, 5, 4, 3, 2, 1};
    printa_vetor(vetor, 6);
    shell_sort(vetor, 0, 6);
    printa_vetor(vetor, 6);
    return 0;
}