#include <iostream>
using namespace std;

//Acesso a Elementos Específicos do Array:

//Dado o array de inteiros: {3, 7, 9, 12, 4, 6, 8, 10}, imprima no terminal:
//O terceiro elemento do array.
//A soma do sexto elemento com o oitavo elemento.
//A diferença entre o segundo elemento e o primeiro.
//O quarto elemento se for maior que 6.
//O último elemento se o primeiro for par.
//O primeiro elemento se a soma do quarto com o oitavo for maior que 22.

int main(){
    int array[] = {3,7,9,12,4,6,8,10};

        cout << array[2] << endl;
        cout << array[5] + array[7] << endl;
        cout << array[1] - array[0] << endl;
        if(array[3] > array[5]){
            cout << array[3] << endl;
        }
        return false;
    }

