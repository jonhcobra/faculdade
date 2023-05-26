/*Uma turma tem 30 alunos. Faca um programa que receba as notas dos alunos relativas as
2 provas que eles realizaram durante o semestre. Exiba a media de cada aluno, a situacao
(se media maior ou igual a 7, aluno aprovado), e a media da turma para cada prova. Utilize
2 vetores alocados dinamicamente para armazenar as notas, referentes a cada prova.
*/

#include <stdio.h>
#include <stdlib.h>

float *nota1, *nota2; // Nota dos alunos
int qtd = 0, *p;      // Quantidade de alunos
int i = 0;            // indice
float media = 0.0;    // Media das notas

int main()
{
    printf("Digite a quantidade de alunos:");
    scanf("%d", &qtd);
    nota1 = (float *)malloc(qtd * sizeof(float));
    nota2 = (float *)malloc(qtd * sizeof(float));
    if (!nota1 || !nota2)
    {
        printf("Estouro de memória\n");
        exit(1);
    }

    // Entrada das Notas
    for (i = 0; i < qtd; i++)
    {
        printf("\nDigite a nota da primeira prova do aluno %d: ", i + 1);
        scanf("%f", &nota1[i]);
        printf("\nDigite a nota da segunda prova do aluno %d: ", i + 1);
        scanf("%f", &nota2[i]);
        printf("\n\n\n");
    }
    // Calculo da Média
    for (i = 0; i < qtd; i++)
    {
        media = (nota1[i] + nota2[i]) / 2;
        printf("aluno %d \nprova1: %f \nprova2: %f \nmedia: %f", i + 1, nota1, nota2, media);
        if (media <= 7)
            printf("\nAPROVADO");
        else
            printf("\nREPROVADO");
        printf("\n\n\n");
    }
    printf("\n");
    free(nota1); // libera a memoria alocada
    free(nota2); // libera a memoria alocada
    return 0;
}