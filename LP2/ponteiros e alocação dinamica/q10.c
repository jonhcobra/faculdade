/*Escreva um programa que receba como dados duas matrizes A e B, de m linhas e n colunas
cada uma. As dimensoes das matrizes sao informadas pelo usuario em tempo de execucao.
Imprima na tela o resultado de A + B e A − B.*/

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
    printf("\n\nsoma-> ");
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            printf("%d ", A[i][j] + B[i][j]);
        }
    }
    printf("\nsub->");
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            printf("%d ", A[i][j] - B[i][j]);
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