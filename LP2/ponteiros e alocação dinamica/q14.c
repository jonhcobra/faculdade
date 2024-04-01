/*Escreva um programa que receba uma cadeia de caracteres str e um caractere c. Seu
programa deve informar a quantidade de ocorrˆencias de c em str. Utilize aritm´etica de
ponteiros para acessar os elementos de str.*/

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
        if (*str == 'c')
        {
            count++;
        }
        str++;
    }
    printf("%d", count);
}