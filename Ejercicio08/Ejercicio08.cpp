// 8. Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y 
//    escriba en la salida estándar su hipotenusa.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float Cateto1, Cateto2, Hipotenusa = 0;

    cout << "Cateto A: "; cin >> Cateto1;
    cout << "Cateto B: "; cin >> Cateto2;

    Hipotenusa = pow(Cateto1, 2) + pow(Cateto2, 2);
    Hipotenusa = sqrt(Hipotenusa);

    cout.precision(2);
    cout << "\nHipotenusa: " << Hipotenusa << endl;
    return 0;
}
