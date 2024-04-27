#include <iostream>
using namespace std;

//Condicional com Array (Utilizando While):

//Declare um array de floats com 8 elementos e preencha-o com valores decimais.
//Utilize um loop while para imprimir apenas os valores maiores que 5 do array.

int main(){
    float num[] = {1.02,2.54,4.99,5.00,6.05,7.23,8.90,9.01};
    int i = 0;

    while(i < 8){
        if(num[i] > 5){
            cout << num[i] << endl;
        }
        i++;
    }
    return false;
}