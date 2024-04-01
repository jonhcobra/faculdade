/*Faça uma função que receba um vetor, o seu tamanho e um número N, e
multiplique todos os elementos do vetor por N.*/

#include <stdio.h>
#include <stdlib.h>

void produto(int *vetor, int a, int b)
{
    for (int i = 0; i <= a; i++)
    {
        vetor[i] *= b;
        printf("valor %d: %d\n ", i + 1, vetor[i]);
    }
}
int main()
{

    int tamanho, num;
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
    printf("\n o numero q sera mupliplica nos valores do vetor:");
    scanf("%d", &num);
    produto(vetor, tamanho, num);
}