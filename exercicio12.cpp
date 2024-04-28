#include <iostream>
using namespace std;

//Cálculo da Média Ponderada dos Elementos do Array:
//Declare dois arrays de floats, um para armazenar as notas e outro para armazenar os pesos correspondentes. 
//Ambos os arrays devem ter 5 elementos. Solicite ao usuário que insira valores para as notas e os pesos. 
//Em seguida, calcule e imprima a média ponderada das notas, 
//onde a média ponderada é calculada pela soma das multiplicações de cada nota pelo seu peso correspondente,
//dividida pela soma total dos pesos.

int main(){
    float nota[5];
    float peso[5];
    float media;

    cout <<"Digite a NOTA: " << endl;
    cin >> nota[0];
    cout <<"Digite o PESO: " << endl;
    cin >> peso[0];

    cout <<"Digite a NOTA: " << endl;
    cin >> nota[1];
    cout <<"Digite o PESO: " << endl;
    cin >> peso[1];

    cout <<"Digite a NOTA: " << endl;
    cin >> nota[2];
    cout <<"Digite o PESO: " << endl;
    cin >> peso[2];

    cout <<"Digite a NOTA: " << endl;
    cin >> nota[3];
    cout <<"Digite o PESO: " << endl;
    cin >> peso[3];

    cout <<"Digite a NOTA: " << endl;
    cin >> nota[4];
    cout <<"Digite o PESO: " << endl;
    cin >> peso[4];

    media = (((nota[0] * peso[0]) + (nota[1] * peso[1]) + (nota[2] * peso[2]) + (nota[3] * peso[3]) + (nota[4] * peso[4])) / (peso[0] + peso[1] + peso[2] + peso[3] + peso[4] + peso[5]));

    cout <<"a média ponderada é: " << media << endl;
    return false;
}