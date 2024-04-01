/*1.Um laboratório de meteorologia fornece todo mês um arquivo com a temperatura mínima e máxima diária de cada mes.
O arquivo tem o seguinte formato:
dados para cada dia do mês:
<Mês>, <Dia>, <temperatura Máxima>, <Temperatura Mínima>:
Exemplo:
Arquivo: temperaturas.dat
5, 1, 27.1, 23.0
5, 2, 31.5, 26.2
5, 3, 30.2, 28.8*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int mes, dia;
    float max, min;
} temp;

int main()
{
    temp p;

    FILE *arq = fopen("temps.dat", "a+");
    if (arq == NULL)
    {
        printf("erro na leitura do arquivo");
        exit(1);
    }
    for (int i = 0; i < 10; i++)
    {
        fscanf(arq, "%d, %d, %f, %f\n", &p.mes, &p.dia, &p.max, &p.min);
        printf("%d %d %.2f %.2f\n", p.mes, p.dia, p.max, p.min);
    }

    fclose(arq);
    return 0;
}
