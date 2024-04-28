#include <iostream> 
using namespace std;
//Cálculo da Soma dos Elementos do Array:

//Declare um array de inteiros com 10 elementos e preencha-o com números de sua escolha. 
//Utilize um loop for para calcular e imprimir a soma de todos os elementos do array.

int main(){
    int num[] = {10,20,30,40,50,60,70,80,90,0};
    int soma = 0;

    for(int i = 0; i < 10; i++){
        soma += num[i];
        cout << soma << endl;;
    }
    return false;
}