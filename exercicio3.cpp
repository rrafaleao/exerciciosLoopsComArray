#include <iostream> 
using namespace std;

//Condicional com Array (Utilizando For):

//Declare um array de inteiros com 7 elementos e preencha-o com números de sua escolha.
//Em seguida, utilize um loop for para imprimir apenas os números pares do array.

int main(){
    int num[] = {1,4,8,12,5,6,7};
    for(int i = 1; i < 7; i++){
        if(num[i] % 2 == 0){
            cout << num[i] << endl;
        }
    }
}