#include "stdio.h"
#include "stdlib.h"

int main() {
    int linha = 3, coluna = 2, i, j;
    int **matriz;
    matriz = (int**) malloc(sizeof(int*) * linha);//linha vezes o tamanho de um ponteiro.

    for(i=0; i<linha; i++)
        matriz[i] = (int*) malloc(sizeof(int) * coluna);//coluna vezes o tamnho de um int.
}
