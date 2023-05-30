/*Defina uma função Hipotenusa que calcule o comprimento da 
hipotenusa de um triângulo retângulo, ao serem fornecidos os catetos. 
Use a função em um programa para determinar o comprimento da 
hipotenusa onde o comprimento dos catetos são lidos pelo programa. A
função deve receber dois argumentos float e retornar um valor float.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hipotenusa(float a, float b)
{
    float c;
    c=(a * a) + (b * b);
    c = sqrt(c);
    printf("a hipotenusa eh %.2f", c);
}
int main()
{
    float num1, num2;
    printf("digite um cateto:");
    scanf("%f", &num1);
    printf("digite o outro cateto:");
    scanf("%f", &num2);
    hipotenusa(num1, num2);
    return 0;
}