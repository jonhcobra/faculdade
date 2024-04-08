#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void clear_keyboard_buffer(void)
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}
int opcao_isa()
{
    char isa[7];
    clear_keyboard_buffer();
    gets(isa);


    char BIPUSH[7] = {"BIPUSH"};
    char IADD[7] = {"IADD"};
    char ISUB[7] = {"ISUB"};
    char IMUL[7] = {"IMUL"};

    if (strcmp(isa, BIPUSH) == 0)
    {
        return 1;
    }
    else
    {
        if (strcmp(isa, IADD) == 0)
        {
            return 2;
        }
        else
        {
            if (strcmp(isa, ISUB) == 0)
            {
                return 3;
            }
            else
            {
                if (strcmp(isa, IMUL) == 0)
                    return 4;
            }
        }
    }
    return 0;
}

typedef struct no
{
    int valor;
    struct no *proximo;
} No;

No *empilhar(No *topo, int k)
{
    No *novo = malloc(sizeof(No));

    if (novo)
    {
        novo->valor = k;
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
    int n = 1, opcao, valor, n1, n2, res;

    while (n != 0)
    {
        No *remover, *topo = NULL;

        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            opcao = opcao_isa();
            printf("opcao %d\n", opcao);
            switch (opcao)
            {
            case 1:

                scanf("%d", &valor);
                topo = empilhar(topo, valor);
                break;
            case 2:
                n1 = topo->valor;
                remover = desempilhar(&topo);
                free(remover);
                n2 = topo->valor;
                remover = desempilhar(&topo);
                free(remover);
                res = n1 + n2;
                topo = empilhar(topo, res);
                break;
            case 3:
                n1 = topo->valor;
                remover = desempilhar(&topo);
                free(remover);
                n2 = topo->valor;
                remover = desempilhar(&topo);
                free(remover);
                res = n1 - n2;
                topo = empilhar(topo, res);
                break;
            case 4:
                n1 = topo->valor;
                remover = desempilhar(&topo);
                free(remover);
                n2 = topo->valor;
                remover = desempilhar(&topo);
                free(remover);
                res = n1 * n2;
                topo = empilhar(topo, res);
                break;
            }
        }
        printf("\n%d", topo->valor);
    }
    return 0;
}