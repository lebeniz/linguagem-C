#include "stdlib.h"
#include "stdio.h"

int main(){
    int c;

    FILE *file;

    file = fopen("casa.txt", "r");//abre o arquivo e ler (r)

    if(file){

        while((c=getc(file)) != EOF )
            printf("%c",c);
    }

    fclose(file);


}
