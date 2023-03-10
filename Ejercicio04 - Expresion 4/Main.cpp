// 4. Escriba la siguiente expresión: a + b/c-d

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    float A{}, B{}, C{}, D{}, Resultado{};

    cout << "Número A: "; cin >> A;
    cout << "Número B: "; cin >> B;
    cout << "Número C: "; cin >> C;
    cout << "Número D: "; cin >> D;

    Resultado = A + (B / (C - D));

    cout.precision(2);
    cout << "\nEl resultado es: " << Resultado << "\n";

    return 0;
}