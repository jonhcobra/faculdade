/*Faça uma função que receba um número por parâmetro e retorne 1 (um)
se for primo e 0 (zero) se não for um número primo.*/

#include <stdio.h>
#include <stdlib.h>

int primo(int a)
{
    int primo = 0;
    for (int i = 2; i < a; i++)
    {
        printf("%d\n",i);
        if (a % i == 0)
        {
            primo++;
            break;
        }
    }
    return primo;
}

int main()
{
    int num, result;

    printf("Digite um numero: ");
    scanf("%d", &num);

    result = primo(num);

    if (result == 0)
        printf("\n\n%d e um numero primo\n", num);
    else
        printf("\n\n%d nao e um numero primo\n", num);

    return 0;
}