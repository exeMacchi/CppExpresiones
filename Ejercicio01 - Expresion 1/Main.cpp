// 1. Escribe la expresión a/b + 1

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    float A{}, B{}, Resultado{};

    cout << "Ingrese el primer número: "; cin >> A;
    cout << "Ingrese el segundo número: "; cin >> B;

    Resultado = (A / B) + 1;

    cout.precision(2);
    cout << "\nEl resultado es: " << Resultado << "\n";
    return 0;
}