#include "stdio.h"
#include "stdlib.h"
#include "new"

int main() {
    int linha = 3, coluna = 2, i, j;
    int **matriz;
    matriz = (int**) new int[linha];//linha vezes o tamanho de um ponteiro.

    for(i=0; i<linha; i++)
        matriz[i] = (int*) new int[coluna];//coluna vezes o tamnho de um int.
}
