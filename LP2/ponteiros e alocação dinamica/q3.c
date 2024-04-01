/*Crie 3 vari´aveis e associe um valor a cada uma delas. Crie 1 ponteiro e mostre o conte´udo
das 3 vari´aveis atrav´es deste ´unico ponteiro.*/
#include <stdio.h>
#include <stdlib.h>
int main()

{
    int v1 = 1, v2 = 2, v3 = 3;
    int *ponteiro;

    ponteiro = &v1;
    printf("%d\n", *ponteiro);

    ponteiro = &v2;
    printf("%d\n", *ponteiro);

    ponteiro = &v3;
    printf("%d\n", *ponteiro);

    return 0;
}