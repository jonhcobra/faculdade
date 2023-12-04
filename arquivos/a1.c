#include <stdio.h>
#include <stdlib.h>

void criar_arq()
{
    FILE *arq = fopen("dados.txt", "w");
    for (int i = 1; i < 100; i++)
    {
        fprintf(arq, "%d\n", i);
    }
    fclose(arq);
}
void ler_arq()
{
    FILE *arq = fopen("dados.txt", "r");
    int num;
    for (int i = 1; i <= 100; i++)
    {
        fscanf(arq, "%d\n", &num);
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