/*Diz-se que um número e perfeito se a soma de seus fatores, incluindo 1
(mas não o número em si), resulta no próprio número. Por exemplo 6, e
um número perfeito porque 6 = 1+2+3. Escreva uma função perfeito que
determine se o parâmetro número e um número perfeito. Use essa
função em um programa que determine e imprima todos os números
perfeitos entre 1 e 100. Imprima os fatores de cada número encontrado
para confirmar que ele é realmente perfeito.*/

#include <stdio.h>
#include <stdlib.h>

void perfeito()
{
    int soma, temp;

    for (int i = 0; i <= 100; i++)
    {
        soma = 0;
        temp = 1;

        while (soma <= i)
        {
            soma += temp;
            temp++;

            if (soma == i)
            {
                printf("\nnumero perfeito --> %d", i);
                break;
            }
        }
    }
}

int main()
{
    perfeito();
}