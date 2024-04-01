/*Escreva um programa que receba uma cadeia de caracteres (str) e informe a quantidade de
caracteres. Utilize um ponteiro a caractere para processar os elementos de str.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str;
    int count = 0;

    printf("digite algo:");
    gets(str);

    while (*str != '\0')
    {
        count++;
        str++;
    }
    printf("%d", count);
}