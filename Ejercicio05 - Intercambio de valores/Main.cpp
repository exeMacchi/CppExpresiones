// 5. Intercambio de valores.

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    float A{}, B{}, Aux{};

    cout << "N�mero A: "; cin >> A;
    cout << "N�mero B: "; cin >> B;

    Aux = A;
    A = B;
    B = Aux;

    cout << "\nAhora el n�mero A es: " << A;
    cout << "\nAhora el n�mero B es: " << B << "\n";

    return 0;
}