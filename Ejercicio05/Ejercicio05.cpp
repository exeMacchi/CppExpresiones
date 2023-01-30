// 5. Intercambio de valores.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float A, B, Aux;

    cout << "Numero A: "; cin >> A;
    cout << "Numero B: "; cin >> B;

    Aux = A;
    A = B;
    B = Aux;

    cout << "\nAhora el numero A es: " << A;
    cout << "\nAhora el numero B es: " << B << endl;

    return 0;
}
