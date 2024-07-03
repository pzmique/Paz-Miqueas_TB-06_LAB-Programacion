#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long potencia(int base, int exponente){
    long resultado = 1;
    
    for(int i = 0; i < exponente; i++){
        resultado *= base;
    }

    if (exponente < 0){
        return 1 / resultado;
    }

    return resultado;
}

int main()
{
    int base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    long resultado = potencia(base, exponente);
    cout << "El resultado de " << base << " elevado a " << exponente << " es: " << resultado << endl;

    return 0;
}