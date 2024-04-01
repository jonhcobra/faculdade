/*Escreva uma função DecimalToBinario que receba um número inteiro e
retorne uma cadeia de caracteres com o número em representação
binária. Exemplo: se a função receber o número 17 deverá retornar
100001.*/

#include <stdio.h>
#include <stdlib.h>

void bin(int num)
{
    int *temp = malloc((num / 2) * sizeof(int));
    int i = 0;
    for (i = 0; num != 0; i++)
    {
        temp[i] = num % 2;
        num /= 2;
    }
    while (i >= 0)
    {
        printf("%d", temp[i]);
        i--;
    }
}
int main()
{
    int num;
    printf("digite um numero:");
    scanf("%d", &num);
    bin(num);
    return 0;
}