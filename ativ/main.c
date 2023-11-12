#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcionario.h"
#include "menu.h"
#define QTDE_OPCOES 6


int main(){

    int qtde;
    Funcionario func[300];
    int opcao;
    setlocale(LC_ALL, "Portuguese");

    while (1)
    {
        mostra_menu();
        opcao = escolhe_opcao(QTDE_OPCOES);
        switch (opcao){
            case 1:
                insere_funcionario(func);
                break;
            case 2:
                qtde=mostra_funcionarios(func);
                printf("\nforam lidos %d funcionarios",qtde);
                getchar();
                break;
            case 3:
                qtde=reajusta(func);
                printf("\nforam reajustados %d funcionarios",qtde);
                getchar();
                break;
            case 4:
                apaga_funcionario();
                break;
            case 5:
                obtem_func();
                break;
            case 6:
                exit(0);
                break;
        }
    }





}