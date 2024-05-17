#include <iostream>
using namespace std;
/// Ejercicio 1

int main(){
    int numero1;
    int numero2;

    cout << "Ingrese dos numeros: " << endl;
    cin >> numero1;
    cin >> numero2;
    double suma = numero1 + numero2;
    double resta = numero1 - numero2;
    double multi = numero1 * numero2;
    double div = numero1 / numero2;

    cout << "La suma de los numeros es de: " << suma << endl;
    cout << "La resta de los numeros es de: " << resta << endl;
    cout << "La multiplicacion de los numeros es de: " << multi << endl;

    if(numero1%numero2 == 0){
        cout << "La division de los numeros es de: " << div;
    }else{
        cout << "La division de los numeros no da un entero";
    }
}
