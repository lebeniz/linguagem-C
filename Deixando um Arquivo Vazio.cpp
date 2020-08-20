#include "string"
#include "fstream"
#include "iostream"

using namespace std;

int main(){
    ofstream meuaqruivo;//declarado objeto arquivo

    meuaqruivo.open("casa.txt");//abre o arquivo

    meuaqruivo << "";//esvazia o arquivo

    meuaqruivo.close();
}
