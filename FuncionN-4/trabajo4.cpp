#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Vocal(char c){
    // convierte el caràcter a minuscula
    int lowerC = tolower(c);
    return (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u');
}

int main(){
    char caracter;
    cout << "ingrese un caràcter: ";
    cin >> caracter;

    bool resultado = Vocal(caracter);

    if (resultado){
        cout << caracter << " es una vocal." << endl;
    } else{
        cout << "'" << caracter << "'" << " no es una vocal." << endl;
    }

    return 0;
}