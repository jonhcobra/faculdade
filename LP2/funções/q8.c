/*Diz-se que um número inteiro ¶e primo se for divisível apenas por 1 por
se mesmo. Por exemplo, 2, 3, 5, e 7 são números primos, mas 4, 6, 8 e
9, não são.
a. Escreva uma função que determine se um número é primo.
b. Use essa função em um programa que determine e imprima todos
os números primos entre 1 e 1000.*/

#include <stdio.h>
#include <stdlib.h>

void primo()
{
    int linha = 0;
    for (long int i = 0; i <= 1000; i++)
    {
        for (long int j = 2; j < i; j++)
        {

            if (i % j == 0)
                break;
            else
            {
                printf("->%d  ", i);
                linha++;
                if (linha == 10)
                {
                    printf("\n");
                    linha = 0;
                }
                break;
            }
        }
    }
}

int main()
{
    primo();
    return 0;
}