#include <iostream>
using namespace std;

//Condicional Aninhado com Array (Utilizando For):
//Declare um array de inteiros com 8 elementos e preencha-o com valores de sua escolha. 
//Utilize um loop for para imprimir apenas os números que são múltiplos de 3 e maiores que 10 do array.

int main(){
    int num[] {10,2,3,9,43,52,81,9};
    for(int i = 0; i < 8; i++){
        if((num[i] % 3 == 0) || (num[i] > 10)){
            cout << num[i] << endl;
        }
    return false;
}