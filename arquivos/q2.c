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
        printf("erro no arquivo");
        exit(1);
    }
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %d %f %f", &p.mes, &p.dia, &p.max, &p.min);
        fprintf(arq, "%d, %d, %.2f, %.2f\n", p.mes, p.dia, p.max, p.min);
    }

    fclose(arq);
    return 0;
}
