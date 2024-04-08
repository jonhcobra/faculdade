#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *proximo;
} No;

No *empilhar(No *topo, int v)
{
    No *novo = malloc(sizeof(No));

    if (novo)
    {
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
    No *remover, *topo = NULL;
    int n, ni, tam = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ni);
        if (ni / 2 != 0)
        {
            if (topo != NULL)
            {
                remover = desempilhar(&topo);
                free(remover);
                tam--;
            }
        }
        if (topo == NULL)
        {
            topo = empilhar(topo, ni);
            tam++;
        }
        else
        {
            if (ni < topo->valor)
            {
                topo = empilhar(topo, ni);
                tam++;
            }
        }
    }
    printf("\n%d", tam);
    return 0;
}
