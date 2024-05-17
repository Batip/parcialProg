#include <iostream>
using namespace std;
/// Ejercicio 3
/*
Escribe un programa que solicite al usuario ingresar un numero entero positivo y luego calcule y muestre el factorial del mismo
Requisitos:
1- El programa debe utilizar un bucle para calcular un factorial
2- Debe manejar correctamente el caso de un numero ingresado igual a 0
3- SI el usuario ingresa un num negativo, el programa debe mostrar error
*/

int main(){
    int num;
    int acum;
    cout << "Ingrese un numero entero mayor a 0: ";
    cin >> num;

    if(num < 1){
        cout << "Ingrese un numero mayor a 0";
    }else{
        for(int fac = num;fac >= 1; --fac){
                unsigned long long factorial = fac * num;
                acum = acum + factorial;
    }
}
    if(num > 1){
            cout << num << "! = " << acum;
    }
}
