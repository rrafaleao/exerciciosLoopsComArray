#include <iostream>
using namespace std;

//Declaração e Impressão de Array (Utilizando While):

//Declare um array de caracteres com 6 elementos e preencha-o com letras do alfabeto.
//Utilize um loop while para imprimir cada elemento do array no terminal.

int main(){
    char alfabeto[] = {'a','b','c','d','e','f'};
    int i = 0;
    while(i < 6){
        cout << alfabeto[i] << endl;
        i++;
    }
    return false;
}