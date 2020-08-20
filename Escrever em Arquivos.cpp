#include "stdlib.h"
#include "stdio.h"
#include "fstream"

using namespace std;

int main (){
    ofstream arquivo_de_saida;//declarado objeto aqruivo
    arquivo_de_saida.open("casa.txt", std::ios_base::app);//cria o arquivo, da nome a ele(casa.txt) e formata ele ( std::ios_base::app)

    arquivo_de_saida << "\nteste1";

    arquivo_de_saida.close();
}
