/*Faça uma função para retornar o valor absoluto de um número.*/

#include <stdio.h>
#include <stdlib.h>

int absoluto(int a){
    if(a<0)a*=-1;
    return a;
}
int main(){
    int num,result;
    printf("digite um numero : ");
    scanf("%d",&num);
    result=absoluto(num);
    printf("o valor absoluto de %d eh %d",num,result);
    return 0;
}