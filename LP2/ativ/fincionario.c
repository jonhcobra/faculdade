#include "funcionario.h"
#include <stdio.h>
#include <stdlib.h>

//-------------------------------------------
int insere_funcionario(Funcionario func[])
{
    Funcionario f;
    char nomearq[16] = "funcionario.dat";
    FILE *fp;

    printf("\n INCLUSÃO DE FUNCIONÁRIO");
    printf("\nDigite o código do funcionário: ");
    scanf("%d",&f.codigo);
    printf("\nDigite o nome do funcionário: ");
    scanf("%s",f.nome);
    printf("\nDigite o salário do funcionário: ");
    scanf("%f",&f.salario);

    fp = fopen(nomearq,"a+b");
    fwrite(&f, sizeof(Funcionario),1,fp);
    fclose(fp);
    return 1;


}

//--------------------------------------------
int mostra_funcionarios(Funcionario func[])
{
    int qtde = 0;
    Funcionario f;
    char nomearq[16] = "funcionario.dat";
    FILE *fp;
    fp = fopen(nomearq,"rb");
    if(fread(&f,sizeof(Funcionario),1,fp))
    {
        while(!feof(fp))
        {
            printf("\n%d   %15s   R$%6.2f", f.codigo, f.nome, f.salario);
            qtde++;
            fread(&f,sizeof(Funcionario),1,fp);
        }
        fclose(fp);
    }
    else
        printf("\nNão existem funcionários cadastrados!\n");

    return qtde;

}

//---------------------------------------------------
int reajusta(Funcionario func[])
{
    float percent=0;
    int qtde = 0;
    char nomearq[16] = "funcionario.dat";
    FILE *fp;

    printf("\nQual o percentual de reajuste? ");
    scanf("%f",&percent);
    fflush(stdin);


    //----- Obtem do arquivo os dados dos funcionários, armazena em um vetor e mostra na tela ------
    fp = fopen(nomearq,"rb");


    if(fread(&func[qtde],sizeof(Funcionario),1,fp))  //  se havia funcionario para ser lido
    {
        printf("\nSalario Anterior ao Reajuste:");
        printf("\n\n-----------------------------------------------------------");
        printf("\nCodigo        Nome             Salário");
        printf("\n-----------------------------------------------------------\n");
         while(!feof(fp))
        {
            printf("\n%d   %15.5s   R$%15.2f", func[qtde].codigo, func[qtde].nome, func[qtde].salario);
            qtde++;
            fread(&func[qtde],sizeof(Funcionario),1,fp);

        }
        // ------------ Reajusta os salários ----------------------------
        printf("\nSalário depois do Reajuste:");

        printf("\n\n-----------------------------------------------------------");
        printf("\nCodigo        Nome             Salário");
        printf("\n-----------------------------------------------------------\n");

        for(int i=0; i<qtde; i++)
        {
            func[i].salario *= 1.0+(percent/100);
            printf("\n%d   %15.5s   R$%15.2f", func[i].codigo, func[i].nome, func[i].salario);
        }

        //-----------  Salva Arquivo com Novos Dados ------
        fp = fopen(nomearq,"wb");
        fwrite(func, sizeof(Funcionario),qtde,fp);
        fclose(fp);

    }
    else
        printf("\nNão existem funcionários cadastrados!\n");

    return qtde;

}

void apaga_funcionario()
{
    char confirma;
    printf("Confirma que deseja apagar todos os dados do arquivo <s/n>? ");
    scanf("%c", &confirma);
    if ((confirma == 's') || (confirma == 'S'))
    {
        if (remove("funcionario.dat") != 0)
            printf("\nNão foi possível excluir o arquivo!!!");
    }
    else
        printf("\nOperação cancelada pelo usuário, nenhum arquivo foi cancelado");
    fflush(stdin);
    printf("\nDigite algo para continuar...");
    getchar();

}

void obtem_func()
{
    FILE *fp;
    Funcionario func;
    int posicao = 0;
    printf("\nQual a posição do registro funcionario: ");
    scanf("%d", &posicao);
    fp = fopen("funcionario.dat","rb");
    fseek(fp,posicao-1 * sizeof(Funcionario), SEEK_SET);
    fread(&func, sizeof(Funcionario),1,fp);
    printf("\n\nCodigo: %d,  Nome: %s, Salario: %f\n",func.codigo, func.nome, func.salario);
    fclose(fp);
    fflush(stdin);
    printf("\nDigite algo para continuar...");
    getchar();
}