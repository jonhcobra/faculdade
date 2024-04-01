#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

//---- Exibe um menu na tela ----
void mostra_menu(void)
{
    system("cls");
    printf("\nEscolha uma opção:");
    printf("\n1 - Insere um funcionario");
    printf("\n2 - Mostra os funcionarios");
    printf("\n3 - Reajusta os salários");
    printf("\n4 - Apaga arquivo funcionarios");
    printf("\n5 - Mostra funcionario pela posição");
    printf("\n6 - Mostra funcionario pelo código");
    printf("\n7 - Sair");
    printf("\n");
}

// ---- recebe a quantidade de opções e devolve um número dentro do intervalo
// ---- escolhido pelo usuário ------
int escolhe_opcao(int qtde)
{
    int opcao=0;

    while((opcao < 1) || (opcao > qtde))
    {
        printf("\nOpção: ");
        scanf(" %d", &opcao);
        fflush(stdin);
        if ((opcao < 1) || (opcao > qtde))
            printf("\nOpção inválida, digite um número dentro do intervalo.");
    }
    return opcao;

}