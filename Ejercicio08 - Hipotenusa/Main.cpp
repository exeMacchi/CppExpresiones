// 8. Escriba un programa que lea de la entrada est�ndar los dos catetos de un
//    tri�ngulo rect�ngulo y escriba en la salida est�ndar su hipotenusa.

#include <iostream>
#include <math.h>

using std::cout;
using std::cin;

int main()
{
    float Cateto1{}, Cateto2{}, Hipotenusa{};

    cout << "Cateto A: "; cin >> Cateto1;
    cout << "Cateto B: "; cin >> Cateto2;

    Hipotenusa = pow(Cateto1, 2) + pow(Cateto2, 2);
    Hipotenusa = sqrt(Hipotenusa);

    cout.precision(2);
    cout << "\nHipotenusa: " << Hipotenusa << "\n";

    return 0;
}