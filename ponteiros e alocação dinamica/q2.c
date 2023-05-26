/*Crie 3 vari´aveis e associe um valor a cada uma delas. Crie 3 ponteiros, um para cada vari´avel,
e mostre o conte´udo das vari´aveis atrav´es destes ponteiros.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{

    int v1 = 1, v2 = 2, v3 = 3;
    int *p1, *p2, *p3;

    p1 = &v1;
    p2 = &v2;
    p3 = &v3;

    printf("%d", *p1);
    printf("\n%d", *p2);
    printf("\n%d", *p3);
    return 0;
}