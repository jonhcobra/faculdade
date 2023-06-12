/*Faça função recursiva que determine quantas vezes um dígito K ocorre
em um número natural N.
Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.*/

#include <stdio.h>
#include <stdlib.h>

int qtd_digitos(int num)
{
    int qtd = 0, k = 2;

    if (num == 0)
        if (num == k)
            return 1;
        else
            return 0;
    
    if (num % 10 == k)
    {
        qtd = 1;
        
    }
    return qtd + qtd_digitos(num / 10);
}
int main()
{
    int num = 262221192;
    printf("%d", qtd_digitos(num));
}