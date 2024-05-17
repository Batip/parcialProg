#include <iostream>
#include <iomanip>
using namespace std;

/// Ejercicio 4

///1- Solicitar al usuario la cantidad de materias a considerar
///2-Por cada materia: (for)
///    -Solicitar el nombre de la materia
///    -Solicitar la nota obtenida en la materia
///    -Solicitar la ponderacion de la materia (porcentaje)
///3- cout del promedio "cout << fixed << setprecision(2) << promedioPonderado
/// dos acumuladores: de las notas ponderadas y de las ponderaciones

int main(){
    double notasPonderadas = 0;
    double ponderaciones = 0;
    int materias;

    cout << "Cuantas materias a considerar?: ";
    cin >> materias;

    for(int i = 0;i<materias; i++){
        string nombre;
        double ponderacion = 0;
        double nota = 0;

        cout << "Ingrese nombre de la materia:" << endl;
        cin >> nombre;

        cout << "Ingrese la nota obtenida:" << endl;
        cin  >> nota;

        if(nota > 0 && nota < 10){
        cout << "Ingrese la ponderacion de la materia:" << endl;
        cin >> ponderacion;

            ponderacion = ponderacion /100;
            nota = nota * ponderacion;
            notasPonderadas = notasPonderadas + nota;
            ponderaciones = ponderaciones + ponderacion;
        }else{
            cout << "Ingrese una nota mayor a 0" << endl;
        }
    }
    if(ponderaciones*100 < 100){
        double promedioPonderado = notasPonderadas/ponderaciones;
        cout << "El promedio ponderado de las materias es de: " << fixed << setprecision(2) << promedioPonderado;
    }else{
        cout << "La suma de los porcentajes de las ponderaciones es mayor a 100";
    }
}


