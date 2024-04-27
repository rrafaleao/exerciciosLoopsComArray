#include <iostream>
using namespace std;

//Impressão de Propriedades do Array:

//Declare um array de caracteres com 5 elementos e preencha-o com caracteres de sua escolha.
//Utilize uma função para imprimir o tamanho total do array no terminal.

int main(){
    char caracteres[] = {'@','#','+','/','&'};

    for(int i = 0; i < 5; i++){
        sizeof caracteres / sizeof caracteres[0];
        cout << caracteres[i];
        cout << "O array tem: " << sizeof caracteres << "caracteres. " << endl;
    }
}