/*Faça uma função que receba uma palavra e retorne a quantidade de
vogais existentes.
Faça uma função que receba uma palavra e retorne a quantidade de
consoantes existentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contador_de_vogais(char *palavra)
{
    int v = 0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
            v++;
    }
    return v;
}
int contador_de_consoantes(char *palavra)
{
    int c = 0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u')
            c++;
    }
    return c;
}
int main()
{
    char *palavra;
    int vogais, consoantes;
    printf("digite algo:");
    gets(palavra);
    vogais = contador_de_vogais(palavra);
    consoantes = contador_de_consoantes(palavra);
    printf("a palavra '%s' tem %d vogais e %d consoantes", palavra, vogais, consoantes);
}