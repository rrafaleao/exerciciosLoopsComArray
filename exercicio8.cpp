#include <iostream>
using namespace std;

//Entrada de Dados do Usuário e Cálculo da Média:

//Crie um programa que declare um array de floats com 10 elementos. 
//Solicite ao usuário que insira um valor para cada elemento do array. 
//Em seguida, calcule e imprima a média dos valores fornecidos pelo usuário.

int main(){
    float num[10], media;
    cout <<"Digite um número: " << endl;
    cin >> num[0];
    cout <<"Digite um número: " << endl;
    cin >> num[1];
    cout <<"Digite um número: " << endl;
    cin >> num[2];
    cout <<"Digite um número: " << endl;
    cin >> num[3];
    cout <<"Digite um número: " << endl;
    cin >> num[4];
    cout <<"Digite um número: " << endl;
    cin >> num[5];
    cout <<"Digite um número: " << endl;
    cin >> num[6];
    cout <<"Digite um número: " << endl;
    cin >> num[7];
    cout <<"Digite um número: " << endl;
    cin >> num[8];
    cout <<"Digite um número: " << endl;
    cin >> num[9];
   media = ((num[0] + num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8] + num[9]) / 10);

   cout <<"a média dos numeros é: "<< media << endl;
}
