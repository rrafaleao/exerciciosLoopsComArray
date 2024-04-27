#include <iostream>
using namespace std;

//Declaração e Impressão de Array (Utilizando For):

//Declare um array de inteiros com 5 elementos e preencha-o com valores de sua escolha.
//Em seguida, utilize um loop for para imprimir cada elemento do array no terminal.

int main(){
    int num[]= {1,23,34,32,12};

    for(int i = 0; i < 5; i++){
        cout << num[i] << endl;
    }
    return false;
}