#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "iostream"
using namespace std;//é declarado para não precisar usar std:: em todas as funções.
//exemplo:    std::cin>> palavra;//ler dado,  std::cout<< "\n palavra:" <<palavra;



int main(){
    string palavra;//define uma string

    cout<<"digite uma palavra";
    cin>> palavra;//ler dado
    cout<< "\n palavra:" <<palavra;

    printf("\n\n %s",palavra);

}
