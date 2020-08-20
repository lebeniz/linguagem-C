#include "stdio.h"
#include "stdlib.h"

int *alocavetor(int tam){
    int *aux;
    aux = (int*)malloc(sizeof(int) * tam);

    return aux;
}

int main (){
    int *vetor, tam;
    scanf("%d", &tam);

    vetor = alocavetor(tam);

    free(vetor);//usa o free para limpa a memoria quanodo não precisar mais dela
}
