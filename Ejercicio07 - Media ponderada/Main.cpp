/* 
    7. La calificaci�n final de un estudiante es la media ponderada de tres 
       notas:
          � La nota de pr�cticas que cuenta un 30 % del total.
          � La nota te�rica que cuenta un 60 % .
          � La nota de participaci�n que cuenta el 10 % restante.
       Escriba un programa que lea de la entrada est�ndar las tres notas de un 
       alumno y escriba en la salida est�ndar su nota final.
*/    

#include <iostream>

using std::cout;
using std::cin;

int main()
{
   float N1{}, N2{}, N3{}, Nota_Final{};

    cout << "Primera nota: "; cin >> N1;
    cout << "Segunda nota: "; cin >> N2;
    cout << "Tercera nota: "; cin >> N3;

    N1 *= 0.30;
    N2 *= 0.60;
    N3 *= 0.10;

    Nota_Final = (N1 + N2 + N3);

    cout << "\nNota final: " << Nota_Final << "\n";

    return 0;
}