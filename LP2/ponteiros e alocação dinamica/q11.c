/*Escreva um programa que leia uma matriz quadrada via teclado e informe:
a) os dois maiores elementos da matriz,
b) a quantidade de elementos negativos,
c) o produto de todos os elementos da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, maior, maior2, negativo, produto;
    int **A;

    printf("quantos linhas serao :");
    scanf("%d", &m);
    m -= 1;
    printf("quantos colunas serao :");
    scanf("%d", &n);
    n -= 1;

    A = malloc(m * sizeof(int));
    for (int i = 0; i <= n; i++)
        A[i] = malloc(n * sizeof(int));

    if (A == NULL)
    {
        printf("memoria nao alocada");
        return 1;
    }

    printf("\ndigite os valores da matriz A :\n");
    for (int i = 0; i <= m; i++) // matriz A
    {
        for (int j = 0; j <= m; j++)
        {
            printf("\n->");
            scanf("%d", &A[i][j]);
        }
    }

    maior = maior2 = negativo = 0;
    produto = 1;

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (maior < A[i][j])
                maior = A[i][j];
            if (A[i][j] < maior)
                if (maior2 < A[i][j])
                    maior2 = A[i][j];
            if (A[i][j] < 0)
                negativo++;
            produto *= A[i][j];
        }
    }

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (A[i][j] < maior)
                if (maior2 < A[i][j])
                    maior2 = A[i][j];
        }
    }

    printf("primeiro maior : %d \nsegundo maior : %d ", maior, maior2);
    printf("\nquantidade de numeros negativos : %d \n produto : %d", negativo, produto);

    for (int i = 0; i <= n; i++)
    {
        free(A[i]);
    }
    free(A);
}
