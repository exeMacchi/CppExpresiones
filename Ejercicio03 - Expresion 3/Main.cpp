// 3. Escriba la siguiente expresión: a + b/c / d + e/f

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    float A{}, B{}, C{}, D{}, E{}, F{}, Resultado{};

    cout << "Número A: "; cin >> A;
    cout << "Número B: "; cin >> B;
    cout << "Número C: "; cin >> C;
    cout << "Número D: "; cin >> D;
    cout << "Número E: "; cin >> E;
    cout << "Número F: "; cin >> F;

    Resultado = (A + (B / C)) / (D + (E / F));

    cout.precision(2);
    cout << "\nEl resultado es: " << Resultado << "\n";
    return 0;
}   