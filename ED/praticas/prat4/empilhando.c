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

void imprimir_pilha(No *topo)
{
    if (topo == NULL)
    {
        printf("*");
    }
    else
    {
        while (topo)
        {
            printf(" %d", topo->valor);
            topo = topo->proximo;
        }
        printf("\n");
    }
}

int main()
{
    int n = 1;

    while (n != 0)
    {
        No *remover, *topo = NULL;
        char letra;
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            scanf(" %c%*[^\n]", &letra);

            switch (letra)
            {
            case 'E': // empilhar
                topo = empilhar(topo);
                imprimir_pilha(topo);
                break;
            case 'D': // desempilhar
                remover = desempilhar(&topo);
                free(remover);
                imprimir_pilha(topo);
                break;
            }
        }
    }
    return 0;
}