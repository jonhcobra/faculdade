/*Faça uma função para calcular a área de uma circunferência, sabendo que A = πr2*/

#include <stdio.h>
#include <stdlib.h>

float calc_area(float r)
{
    float area;
    area = r * r * 3.14;
    return area;
}

int main()
{
    float raio, result;
    printf("digite o raio da circunferencia: ");
    scanf("%f", &raio);
    result = calc_area(raio);
    printf("\n %f", result);
}