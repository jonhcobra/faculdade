#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *geraImagem(int lin, int col)
{
    int *img = (int *)malloc(lin * col * sizeof(int));
    if (img == NULL)
    {
        printf("memoria n alocada");
        return 0;
    }
    srand(time(NULL));
    for (int i = 0; i < lin * col; i++)
    {
        img[i] = rand() % 256;
    }
    return img;
}

int *getColor(int *img, int i, int j, int col)
{
    int pixel = img[col * i + j];
    return pixel;
}

int *filtroMedia(int *img, int lin, int col)
{
    int *media = (int *)malloc(lin * col * sizeof(int));
    if (media == NULL)
    {
        printf("memoria n alocada");
        return 0;
    }
    for (int i = 1; i < col - 1; i++)
    {
        for (int j = 1; j < lin - 1; j++)
        {
            media[col * i + j] = (img[col * i + j] + img[col * (i + 1) + j] + img[col * (i - 1) + j] +
                                  img[col * i + (j + 1)] + img[col * (i + 1) + (j + 1)] + img[col * (i - 1) + (j + 1)] +
                                  img[col * i + (j - 1)] + img[col * (i + 1) + (j - 1)] + img[col * (i - 1) + (j - 1)]) /
                                 9;
        }
    }
    for (int i = 0; i < col; i++)
    {
        media[col * i] = img[col * i];
        media[col * i + (lin - 1)] = img[col * i + (lin - 1)];
    }
    for (int j = 0; j < lin; j++)
    {
        media[j] = img[j];
        media[col * (col - 1) + j] = img[col * (col - 1) + j];
    }
    return media;
}

void *printarImagem(int *img, int lin, int col)
{
    for (int i = 0; i < col; i++)
    {
        printf("linha %d :", i);
        for (int j = 0; j < lin; j++)
        {
            printf(" %d |", img[col * i + j]);
        }
        printf("\n");
    }
}

int main()
{
    int linha = 10, coluna = 10, pj = 2, pi = 2, pixel;

    int *imagem = (int *)malloc(linha * coluna * sizeof(int));
    int *filtrada = (int *)malloc(linha * coluna * sizeof(int));
    if (imagem == NULL || filtrada == NULL)
    {
        printf("memoria n alocada");
        return 0;
    }
    imagem = geraImagem(linha, coluna);

    printarImagem(imagem, linha, coluna);

    pixel = getPixel(imagem, pi, pj, coluna);
    printf("\n\no pixel na posicao (%d;%d) eh da cor %d \n\n", pi, pj, pixel);

    filtrada = filtroMedia(imagem, linha, coluna);
    printarImagem(filtrada, linha, coluna);

    return;
}