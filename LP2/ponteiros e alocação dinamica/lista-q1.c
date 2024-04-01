#include <stdio.h>
#include <stdlib.h>

/* função de inicialização da lista encadeada */
typedef struct lista
{
int info;
struct lista* prox;
}Lista;

Lista* inicializa (void)
{
return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* insere (Lista* l, int i)
{
Lista* novo = (Lista*) malloc(sizeof(Lista));
novo->info = i;
printf("%d",novo->info);
novo->prox = l;
return novo;
}

int main (void)
{
Lista* l; /* declara uma lista não inicializada */
l = inicializa( ); /* inicializa lista como vazia */
l = insere(l, 25);
l = insere(l, 45);

return 0;
}