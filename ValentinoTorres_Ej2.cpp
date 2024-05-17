#include <iostream>
using namespace std;
///Ejercicio 2
/// divisible por 4, no por 100, a menos que sea divisible por 400

int main(){
    int anio;

    cout << "Ingrese un anio: ";
    cin >> anio;

    if(anio > 0){
        if(anio%4 == 0 && anio%100 != 0){
            cout << "El anio es bisiesto";
        }else if(anio%400 == 0){
            cout << "El anio es bisiesto";
        }else{
            cout << "El anio no es bisiesto";
        }
    }
}
