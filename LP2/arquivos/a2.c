#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void criar_arq()
{
    FILE *arq = fopen("dados.bin", "a+b");
    for (int i = 1; i < 100; i++)
    {
        fwrite(&i, sizeof(int), 1, arq);
    }
    fclose(arq);
}
void ler_arq()
{
    FILE *arq = fopen("dados.txt", "rb");
    int num;
    for (int i = 1; i <= 100; i++)
    {
        fread(&num, sizeof(int), 1, arq);
        printf("%d\n", num);
    }
    fclose(arq);
}

int main()
{
    criar_arq();
    ler_arq();
    return 0;
}