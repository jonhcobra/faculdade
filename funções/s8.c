/*Faça uma função para inverter uma string.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter(char *palavra)
{

    int cont = 0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        cont++;
        printf("cont%d\n", cont);
    }
    char *inver = malloc((cont) * sizeof(char));
    for (int i = cont-1,j=0; i >= 0; i--,j++)
    {
        inver[j] = palavra[i];
    }
    printf("sua palavra invertida eh -> %s\n", inver);
    free(inver);
}
int main()
{
    char *palavra;
    printf("digite uma palavra: ");
    gets(palavra);
    inverter(palavra);
    free(palavra);
    return 0;
}