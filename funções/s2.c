/*Escreva uma função que retorne o menor dos 3 números reais recebidos
por parâmetro.*/

#include <stdio.h>
#include <stdlib.h>

int menor(int a, int b, int c)
{
    int menor;
    if (a < b)
    {
        if (a < c)
            menor = a;
        else
            menor = c;
    }
    else
    {
        if (b < c)
            menor = b;
        else
            menor = c;
    }
    return menor;
}
int main(){
    int num1,num2,num3,result;
    printf("digite tres valores:");
    printf("\n->");
    scanf("%d",&num1);
    printf("\n->");
    scanf("%d",&num2);
    printf("\n->");
    scanf("%d",&num3);
    result=menor(num1,num2,num3);
    printf("\n\n O menor numeros entre  %d | %d | %d  eh %d",num1,num2,num3,result);
    return 0;

}