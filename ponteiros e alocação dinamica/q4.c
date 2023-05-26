/*Escreva um programa incluindo as declaracoes seguintes.
char key, choice;    int num, count;    long int date;    float yield;    double price;
a) Use no programa o  operador de endereco e a funcao printf() para exibir os enderecos
correspondentes a cada variavel.
b) Desenhe um diagrama de como seu compilador reservou o armazenamento pelas vari´aveis
no programa. Em seu diagrama, preencha os endere¸cos exibidos pelo programa.
c) Modifique o programa escrito para (a) exibindo a quantidade de mem´oria que seu computador reserva para cada tipo de dado (use o operador sizeof). Com esta informa¸c˜ao
e a informa¸c˜ao do endere¸co provida em (b), determine se seu compilador reservou o
armazenamento pelas vari´aveis na ordem pelo qual elas foram declaradas. Comente os
resultados.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    char key, choice;
    int num, count;
    long int date;
    float yield;
    double price;
    int *ponteiro;

    ponteiro = &key;
    printf("%d\n", *ponteiro);

    ponteiro = &choice;
    printf("%d\n", *ponteiro);

    ponteiro = &num;
    printf("%d\n", *ponteiro);

    ponteiro = &count;
    printf("%d\n", *ponteiro);

    ponteiro = &date;
    printf("%d\n", *ponteiro);

    ponteiro = &yield;
    printf("%d\n", *ponteiro);
    
    ponteiro = &price;
    printf("%d\n", *ponteiro);

}