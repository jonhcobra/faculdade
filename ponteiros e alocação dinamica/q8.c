/*Escreve um programa que leia n elementos de um vetor de inteiros e informe:
a) a m´edia dos elementos do vetor,
b) o maior elemento do vetor,
c) o menor elemento do vetor,*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int size, maior = 0, menor = 0;
    float media = 0;
    printf("quantos valores serao digitados:");
    scanf("%d", &size);

    int *vetor = malloc(size * sizeof(int));
    if (vetor == NULL)
    {
        printf("memoria nao alocada");
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        printf("\nvalor %d :", i + 1);
        scanf("%d", &vetor[i]);
    }
    menor = vetor[1];
    for (int i = 0; i < size; i++)
    {
        if (maior <= *(vetor + i))
            maior = *(vetor + i);
        if (menor >= *(vetor + i))
            menor = *(vetor + i);
        media += *(vetor + i);
        printf("\n\nvalor %d : %d", i + 1, *(vetor + i));
    }
    media /= size;
    printf("\n\nmedia : %.2f\nmaior : %d\nmenor : %d", media, maior, menor);

    free(vetor);
    return 0;
}