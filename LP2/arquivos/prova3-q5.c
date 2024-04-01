#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *bin = fopen("arquivoBinario.dat", "rb");
    FILE *txt = fopen("arquivoLido.txt", "w");
    if (bin == NULL || txt == NULL)
    {
        printf("erro em um dos arquivos");
        exit(1);
    }
    else
    {
        int val;
        while (!feof(bin))
        {
            fread(&val, sizeof(int), 1, bin);
            fprintf(txt, "%d\n", val);
            printf("%d\n", val);
        }
    }
    fclose(bin);
    fclose(txt);
    return 10;
}