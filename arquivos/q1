/* Programa Exempo de Arquivo
Fazer um programa que permita:
 Obter o número de matricula, o nome e as notas das 3 provas, de todos os alunos da sala e armazenar em um arquivo chamado notas.dat.
Listar todos os alunos e as notas armazenadas, calculando a sua média
*/
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_NOME_ARQ 30

 struct TAluno
 {
     char  matricula[10];
     char  nome[20];
     float notas[3];
 };

typedef struct TAluno Aluno;

void obter_alunos(Aluno *alunos,int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Digite a matricula do %d aluno:",i+1);
        scanf("%s",alunos[i].matricula);
        printf("Digite o nome do %d aluno:", i+1);
        scanf("%s",alunos[i].nome);
        printf("Digite a nota 1 do %d aluno:",i+1);
        scanf("%f",&alunos[i].notas[0]);
        printf("Digite a nota 2 do %d aluno:",i+1);
        scanf("%f",&alunos[i].notas[1]);
        printf("Digite a nota 3 do %d aluno:",i+1);
        scanf("%f",&alunos[i].notas[2]);
    }
}

void armazena(char *nome, Aluno *alunos, int tam)
{
    FILE *fp;
    fp = fopen(nome, "wb");
    fwrite(alunos, sizeof(Aluno),tam,fp);
    fclose(fp);

}

void leitura(char *nome, Aluno *alunos, int tam)
{
    FILE *fp;
    fp = fopen(nome, "rb");
    fread(alunos, sizeof(Aluno),tam,fp);
    fclose(fp);

}

void mostra(Aluno *alunos, int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("\nMatricula: %s", alunos[i].matricula);
        printf("\nNome: %s", alunos[i].nome);
        printf("\nNota1: %f", alunos[i].notas[0]);
        printf("\nNota2: %f", alunos[i].notas[1]);
        printf("\nNota3: %f", alunos[i].notas[2]);
        printf("\n");

    }
}

int main() {

 char nome[30];

 Aluno alunos[3];
 Aluno alunos_novo[3];
 obter_alunos(alunos,3);
 printf("Digite o nome do arquivo para armazenar as informacoes dos alunos:");
 scanf("%s", nome);
 armazena(nome, alunos, 3);
 leitura(nome, alunos_novo, 3);
 printf("\nMostra Aluno Novo");
 mostra(alunos_novo, 3);
 printf("\nMostra Aluno Antigo");
 mostra(alunos, 3);


 return 0;
}