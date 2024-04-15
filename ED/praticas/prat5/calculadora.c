#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *proximo;
} No;

No *empilhar(No *topo)
{
    No *novo = malloc(sizeof(No));

    if (novo)
    {
        int v;
        scanf("%d", &v);
        novo->valor = v;
        novo->proximo = topo;
        return novo;
    }
    else
        printf("\nErro ao alocar memoria...\n");
    return NULL;
}

No *desempilhar(No **topo)
{
    No *remover = *topo;
    *topo = remover->proximo;
    return remover;
    return NULL;
}
int main()
{
}
