// 3. Escriba la siguiente expresi�n: a + b/c / d + e/f

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    float A{}, B{}, C{}, D{}, E{}, F{}, Resultado{};

    cout << "N�mero A: "; cin >> A;
    cout << "N�mero B: "; cin >> B;
    cout << "N�mero C: "; cin >> C;
    cout << "N�mero D: "; cin >> D;
    cout << "N�mero E: "; cin >> E;
    cout << "N�mero F: "; cin >> F;

    Resultado = (A + (B / C)) / (D + (E / F));

    cout.precision(2);
    cout << "\nEl resultado es: " << Resultado << "\n";
    return 0;
}   