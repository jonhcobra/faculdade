#include <stdio.h>
#include <stdlib.h>

typedef struct complex
{
    int valor;
    struct complex *proximo;
} complexo;

void *inserir_inicio(complexo **lista, int valor)
{
    complexo *new = malloc(sizeof(complexo));
    new->valor = valor;
    new->proximo = *lista;
    *lista = new;
}
void *inserir_fim(complexo **lista, int valor)
{
    complexo *new = malloc(sizeof(complexo));
    complexo *aux = malloc(sizeof(complexo));

    new->valor = valor;
    new->proximo = NULL;
    if (*lista == NULL)
    {
        *lista = new;
    }
    else
    {
        aux = *lista;
        while (aux->proximo)
        {
            aux = aux->proximo;
        }
        aux->proximo = new;
    }
}
void *print(complexo *p)
{
    while (p)
    {
        printf("%d ", p->valor);
        p = p->proximo;
    }
}

int main()
{
    complexo *lista = NULL;
    int n = 1;
    char letra;
    int x;

    while (n != 0)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%c", &letra);
            scanf("%d", &x);
            if (letra == 'P')
            {
                inserir_inicio(&lista, x);
            }
            else if (letra == 'U')
            {
                inserir_fim(&lista, x);
            }
        }
        print(lista);
    }
    return 0;
}