#include <stdio.h>
#include <stdlib.h>

int main () {
    //Alocar memoria das variáveis basicas exceto vetor 
    int *numero = malloc(sizeof(int));

    //Verifica se a alocação deu certo, caso não funcionar retorna NULL
    if(numero) {
        *numero = 1;
    }

    *numero += 1;

    //Alocação de vetores
    int *vetor = calloc(3 ,sizeof(int));
    //Verificação
    if (vetor)
    {
        *(vetor) = 10;
        *(vetor + 1) = 2;
        *(vetor + 2) = 2;
    }
    //Realocação da memoria já existente
    numero = realloc(numero, sizeof(int) * 4);
    vetor = reallocarray(vetor, 10 ,sizeof(int));
    //Verificação
    if (vetor)
    {
        *(vetor) = 10;
        *(vetor + 1) = 2;
        *(vetor + 2) = 2;
        *(vetor + 3) = 15;
        *(vetor + 4) = 54;
    }

    //Imprime os valores
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(vetor+i));
    }
    printf("%d\n", *(numero));

    //Libera a memória
    free(vetor);
    free(numero);


    return 0;

}