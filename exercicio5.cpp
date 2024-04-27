#include <iostream> 
using namespace std;

//Atribuição de Valores e Impressão com For:

//Declare um array de inteiros vazio com espaço para 10 elementos. 
//Peça ao usuário para inserir valores para cada elemento do array. 
//Em seguida, utilize um loop for para imprimir os valores do array no terminal.

int main(){
    int num[10];
    cout << "Digite um número: " << endl;
    cin >> num[0];
    cout << "Digite um número: " << endl;
    cin >> num[1];
    cout << "Digite um número: " << endl;
    cin >> num[2];
    cout << "Digite um número: " << endl;
    cin >> num[3];
    cout << "Digite um número: " << endl;
    cin >> num[4];
    cout << "Digite um número: " << endl;
    cin >> num[5];
    cout << "Digite um número: " << endl;
    cin >> num[6];
    cout << "Digite um número: " << endl;
    cin >> num[7];
    cout << "Digite um número: " << endl;
    cin >> num[8];
    cout << "Digite um número: " << endl;
    cin >> num[9];
    int i = 0;

    while(i < 10){
        cout << num[i] << endl;
        i++;
    }
    return false;
}