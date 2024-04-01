#include <stdio.h>

int main()
{
    int n, vet[1000], b, x[100];
    while (n != 0)
    {

        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &vet[i]);
        }
        scanf("%d", &b);
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &x[i]);
        }
        printf("\n");
        for (int i = 0; i < b; i++)
        {

            int t = 0;

            for (int j = 0; j < n; j++)
            {

                if (x[i] == vet[j])
                {

                    printf("%d\n", j + 1);
                    t = 1;
                    break;
                }
                if (t == 0 && j == n - 1)
                {
                    printf("NAO\n");
                }
            }
        }
        printf("\n");
    }
    return 0;
}