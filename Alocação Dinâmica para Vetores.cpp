#include "stdio.h"
#include "stdlib.h"
#include "new"

int main (){
    int tam;
    scanf("%d", &tam);

   int *vetor = new int[tam];//essa linha equivale a alocação normal da liguamgem c simples
   //como o algoritimo passado, (int*)malloc(sizeof(int) * tam);

    free(vetor);//usa o free para limpa a memoria quanodo não precisar mais dela
}
