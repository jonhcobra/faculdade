/*Escreva um programa que declara trˆes ´unicos vetores dimensionais chamados Kms, Lts e
KpL. Cada vetor deve ter capacidade para armazenar 10 elementos. No vetor Kms armazene
os n´umeros: 240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3. No vetor
Lts armazene os n´umeros: 10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4. Cada elemento
do vetor KpL deve ser calculado com os correspondentes elementos dos vetores Kms e Lts;
por exemplo, KpL[0] = Kms[0]/Lts[0]. Calcule os elementos do vetor KpL e mostre eles
na tela.*/

#include <stdio.h>
#include <stdlib.h>
#define size 10
int main()
{
    
    float kms[size] = {240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};
    float lts[size] = {10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4};
    float kpl[size] = {};
    float *pont_kms = kms, *pont_lts = lts, *pont_kpl = kpl;

    if (kms == NULL || kpl == NULL || lts == NULL)
    {
        printf("Erro na alocação de memória\n");
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        *(pont_kpl+i) = *(pont_kms+i) / *(pont_lts+i);
        printf("%d : kms=%.2f  lts=%.2f  kpl=%.2f\n", i + 1, *(pont_kms+i), *(pont_lts+i), *(pont_kpl+i));
    }
}