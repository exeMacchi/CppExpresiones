// 6. Escriba un programa que lea la nota final de cuatro alumnos y calcula la 
//    nota final media de los cuatro alumnos.

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    float A{}, B{}, C{}, D{}, Promedio{};

    cout << "Nota final del alumno 1: "; cin >> A;
    cout << "Nota final del alumno 2: "; cin >> B;
    cout << "Nota final del alumno 3: "; cin >> C;
    cout << "Nota final del alumno 4: "; cin >> D;

    Promedio = (A + B + C + D) / 4;

    cout << "\nNota final media de los cuatro alumnos: " << Promedio << "\n";

    return 0;
}