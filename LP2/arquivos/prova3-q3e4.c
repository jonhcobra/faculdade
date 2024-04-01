#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned char guardarImagem(unsigned char **img, int lin, int col, char *fileName)
{
    FILE *fp = fopen(fileName, "w");
    if (fp == NULL)
    {
        printf("erro no arquivo");
        exit(1);
    }
    else
    {
        fprintf(fp, "%d ,%d\n", lin, col);
        for (int i = 0; i < lin; i++)
        {

            for (int j = 0; j < col; j++)
            {
                fprintf(fp, "%8d", img[i][j]);
            }
            fprintf(fp, "\n");
        }
        fclose(fp);
    }
    return 1;
}
unsigned char **carregaImagem(int *col, int *lin, char *fileName)
{
    FILE *fp = fopen(fileName, "r");
    if (fp == NULL)
    {
        printf("erro no arquivo");
        exit(1);
    }
    else
    {
        fscanf(fp, "%d ,%d\n", &lin, &col);

        printf("imagem lida do arquivo:\n");
        unsigned char **img = (char *)malloc(lin);
        if (img == NULL)
        {
            printf("memoria n alocada");
        }
        for (int i = 0; i < lin; i++)
        {
            img[i] = (char *)malloc(col);
            if (img[i] == NULL)
            {
                printf("memoria n alocada");
                exit(1);
            }
            for (int j = 0; j < col; j++)
            {
                fscanf(fp, "%d", &img[i][j]);
                printf("%8d", img[i][j]);
            }

            printf("\n");
        }

        fclose(fp);
        return img;
    }
}

int main()
{
    srand(time(NULL));
    int col = 10, lin = 10;
    char name[20] = "imagem.txt";

    printf("imagem gerada:\n");

    unsigned char **img = (char *)malloc(lin);
    if (img == NULL)
    {
        printf("memoria n alocada");
        return -1;
    }
    for (int i = 0; i < lin; i++)
    {
        img[i] = (char *)malloc(col);
        if (img[i] == NULL)
        {
            printf("memoria n alocada");
            return -1;
        }
        for (int j = 0; j < col; j++)
        {
            img[i][j] = rand() % 256;
            printf("%8d", img[i][j]);
        }
        printf("\n");
    }

    guardarImagem(img, lin, col, name);
    carregaImagem(col, lin, name);
    return 10;
}