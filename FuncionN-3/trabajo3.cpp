#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Divisibles(int num1, int num2){
    if (num2 == 0)
    {
        cout << "Error: No se puede dividir por 0" << endl;
        return false;
    }
    return (num1 % num2 == 0);
}

int main(){
    
    int num1, num2;
    cout << "ingrese el primero nùmero entero: ";
    cin >> num1;
    cout << "ingrese el segundo nùmero entero: ";
    cin >> num2;

    bool resultado = Divisibles(num1, num2);
    if (resultado == true)
    {
        cout << num1 << " es divisible entre " << num2 << endl;

    } else {
        cout << num1 << " no es divisible entre " << num2 << endl;
    
    }

    return 0;
}