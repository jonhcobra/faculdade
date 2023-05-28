/*Faça uma função que receba 3 números e retorne qual o maior deles (1,2
ou 3). Se tiver número com o mesmo valor deverá retornar zero.*/

#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b, int c)
{
    int maior;
    if (a > b)
    {
        if (a > c)
            maior = a;
        else
            maior = c;
    }
    else
    {
        if (b > c)
            maior = b;
        else
            maior = c;
    }
    if (a == b || a == c || b == c)
        maior = 0;
    return maior;
}
int main()
{
    int num1, num2, num3, result;
    printf("digite tres valores:");
    printf("\n->");
    scanf("%d", &num1);
    printf("\n->");
    scanf("%d", &num2);
    printf("\n->");
    scanf("%d", &num3);
    result = maior(num1, num2, num3);
    if (result == 0)
    {
        printf("vc tem valores igual nas variaveis\n Seu retorno eh %d",result);
    }
    else
        printf("\n\n O maior numeros entre  %d | %d | %d  eh %d", num1, num2, num3, result);
    return 0;
}