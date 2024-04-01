/*Escreva um programa que receba como entrada duas matrizes e imprima na tela o produto
delas. Seu programa deve funcionar para matrizes de quaisquer dimens˜ao.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    int **A, **B;

    printf("quantos linhas serao :");
    scanf("%d", &m);
    m -= 1;
    printf("quantos colunas serao :");
    scanf("%d", &n);
    n -= 1;

    A = malloc(m * sizeof(int));
    B = malloc(m * sizeof(int));


    for (int i = 0; i <= n; i++)
        A[i] = malloc(n * sizeof(int));
    for (int i = 0; i <= n; i++)
        B[i] = malloc(n * sizeof(int));

    if (A == NULL || B == NULL)
    {
        printf("memoria nao alocada");
        return 1;
    }

    printf("\ndigite os valores da matriz A :");
    for (int i = 0; i <= m; i++) // matriz A
    {
        for (int j = 0; j <= m; j++)
        {
            printf("\n->");
            scanf("%d", &A[i][j]);
        }
    }

    printf("\ndigite os valores da matriz B :");
    for (int i = 0; i <= m; i++) // matriz B
    {
        for (int j = 0; j <= m; j++)
        {
            printf("\n->");
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n\nproduto-> ");
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            printf("%d ", A[i][j] * B[i][j]);
        }
    }

    for (int i = 0; i <= n; i++)
    {
        free(A[i]);
        free(B[i]);
    }
    free(A);
    free(B);
}