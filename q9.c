/*Escreva um programa que imprima os primeiros n números primos onde
n é um valor informado pelo usuário. Considere utilizar alguma das
funções implementadas no programa anterior.*/

/*Diz-se que um número inteiro ¶e primo se for divisível apenas por 1 por
se mesmo. Por exemplo, 2, 3, 5, e 7 são números primos, mas 4, 6, 8 e
9, não são.
a. Escreva uma função que determine se um número é primo.
b. Use essa função em um programa que determine e imprima todos
os números primos entre 1 e 1000.*/

#include <stdio.h>
#include <stdlib.h>

void primo(int num)
{
    printf("\nestes sao os numeros primos entre 1 e %d:\n", num);
    int linha = 0;
    for (long int i = 0; i <= num; i++)
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
    int num;
    printf("digite um numero:");
    scanf("%d", &num);
    primo(num);
    return 0;
}