// 5. Intercambio de valores.

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    float A{}, B{}, Aux{};

    cout << "Número A: "; cin >> A;
    cout << "Número B: "; cin >> B;

    Aux = A;
    A = B;
    B = Aux;

    cout << "\nAhora el número A es: " << A;
    cout << "\nAhora el número B es: " << B << "\n";

    return 0;
}