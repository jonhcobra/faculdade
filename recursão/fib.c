#include <stdio.h>

int fibonacci_recursiva_cauda(int n, int a, int b)
{
    if (n == 0)
    {
        return a;
    }
    else if (n == 1)
    {
        return b;
    }
    else
    {
        return fibonacci_recursiva_cauda(n - 1, b, a + b);
    }
}

int fibonacci_cauda(int n)
{
    return fibonacci_recursiva_cauda(n, 0, 1);
}

int main()
{
    int resultado_cauda;
    for (int n = 0; n <= 15; n++)
    {
        resultado_cauda = fibonacci_cauda(n);
        printf("Resultado de %d(Recursiva de Cauda): %d\n", n, resultado_cauda);
    }

    return 0;
}