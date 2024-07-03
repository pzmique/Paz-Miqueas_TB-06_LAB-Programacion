#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double maximo(double num1, double num2 ){
    if(num1 > num2){
        cout << "El numero mayor es: " << num1 << endl;
    }
    else{
        cout << "El numero mayor es: " << num2 << endl;
    }
}

int main(){
    double num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    maximo(num1, num2);
    return 0;

    double resultado = maximo(num1, num2);
    cout << "El numero mayor es: " << resultado << endl;
}   