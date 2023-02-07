// 1. Escribe la expresión a/b + 1

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float A, B, Resultado = 0;

    cout << "Ingrese el primer numero: "; cin >> A;
    cout << "Ingrese el segundo numero: "; cin >> B;

    Resultado = (A / B) + 1;

    cout.precision(2);
    cout << "\nEl resultado es: " << Resultado << endl;
    return 0;
}
