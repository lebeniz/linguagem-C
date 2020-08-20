#include "string"
#include "fstream"
#include "iostream"


using namespace std;

int main(){
    ifstream input("casa.txt");//declara arquivo que será lido

    string textolido;//string que recebe o texto lido

    for(string line; getline(input, line);){//passa o texto do arquivo para a string
        textolido += line;
    }

    cout<< textolido;
}
