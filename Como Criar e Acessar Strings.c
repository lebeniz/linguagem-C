#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(){

    char palavra[10];
    printf("digite uma palavra");

    setbuf(stdin, 0);//limpa o buf

    fgets(palavra, 10, stdin);//ler o dado

    printf("\n\n %s",palavra);
    printf("\ntamanho: %i",palavra);

     /*[] [] [] [] [] [] [] [] [] [ \0 ]*/

    palavra[strlen(palavra)-1] = '\0';
    printf("\ntamanho: %i",palavra);
}
