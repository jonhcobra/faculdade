/*Crie um programa que leia a base e o expoente e imprima baseexpoente.
Admita que o expoente seja um valor inteiro (positivo, negativo ou zero).
Escreva uma função PotenciaInt, que utilize um for para controlar o
calculo. Não use a função power().*/

#include <stdio.h>
#include <stdlib.h>

void elevar(float num, int exp)
{
    float result;
    if (exp >= 0)
    {
        result = 1;
        for (int i = 0; i < exp; i++)
        {
            result *= num;
        }
    }
    else
    {
        result = num;
        for (int i = 0; i >= exp; i--)
        {
            result /= num;
        }
    }
    printf("o resultado de %.2f elevado a %d eh %f", num, exp, result);
}
int main()
{
    float base;
    int expoente;
    printf("digite a base:");
    scanf("%f", &base);
    printf("digite o expoente:");
    scanf("%d", &expoente);
    elevar(base, expoente);
    return 0;
}