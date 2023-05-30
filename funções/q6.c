/*Escreva um programa que receba n duplas de números inteiros e
determine se o segundo e múltiplo do primeiro. Escreva uma função
Multiplo que receba dois números inteiros e retorne 1 se o segundo for
múltiplo do primeiro ou 0 em caso contrário.*/

#include <stdio.h>
#include <stdlib.h>

void mutiplo(int *vetor, int qtd)
{
    for (int i = 0; i < qtd; i += 2)
    {
        if (vetor[i] % vetor[i + 1] == 0)
        {
            printf("\n%d eh mutiplo de %d,retorno 0", vetor[i], vetor[i + 1]);
        }
        if (vetor[i + 1] % vetor[i] == 0)
        {
            printf("\n%d eh mutiplo de %d,retorno 1", vetor[i + 1], vetor[i]);
        }
        else
            printf("\n%d nao tem relacao de mutiplicidade com %d,retorno -1", vetor[i + 1], vetor[i]);
    }
}
int main()
{
    int qtd;

    printf("digite a quantidade de pares:");
    scanf("%d", &qtd);
    qtd *= 2;
    int *num = malloc(qtd * sizeof(int));
    printf("\n %d \n",qtd);
    printf("digite os numeros:\n");
    for (int i = 0; i < qtd; i++)
    {
        printf("->");
        scanf("%d", &num[i]);
    }
    mutiplo(num, qtd);
    return 0;
}
