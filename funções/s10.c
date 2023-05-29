/*Faça uma função que receba um vetor de números inteiros e ordene o
vetor.*/

#include <stdio.h>
#include <stdlib.h>

void ordenador(int *vetor, int tamanho)
{
    int temp=0;
    for (int i = 0; i <= tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i <= tamanho; i++)
        printf("\n->%d", vetor[i]);
}
int main()
{
    int tamanho;
    printf("tamanho do vetor:");
    scanf("%d", &tamanho);
    tamanho -= 1;

    int *vetor = malloc(tamanho * sizeof(int));

    printf("digite agora os numeros que estarao no vetor\n");

    for (int i = 0; i <= tamanho; i++)
    {
        printf("\n->");
        scanf("%d", &vetor[i]);
    }
    ordenador(vetor, tamanho);
    free(vetor);
}