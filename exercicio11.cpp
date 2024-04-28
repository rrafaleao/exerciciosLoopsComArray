#include <iostream>
using namespace std;

//Busca por Valor Máximo e Mínimo no Array:
//Declare um array de inteiros com 12 elementos e preencha-o com números de sua escolha. 
//Em seguida, crie um programa que utilize loops for para encontrar e imprimir o valor máximo e o valor mínimo do array.

int main(){
    int num[] = {0,1,2,3,40,5,6,7,8,9,10,12};
    int max = num[0];
    int min = num[0];

    for(int i = 0; i < 12; i++){
        if(num[i] > max){
            max = num[i];
        }

        if(num[i] < min){
            min = num[i];
        }
    }        
    cout <<"O maior numero do array é: " << max << endl;
    cout <<"O menor numero do array é: " << min << endl;

    return false;
}