// 4. Escriba la siguiente expresi�n: a + b/c-d

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    float A{}, B{}, C{}, D{}, Resultado{};

    cout << "N�mero A: "; cin >> A;
    cout << "N�mero B: "; cin >> B;
    cout << "N�mero C: "; cin >> C;
    cout << "N�mero D: "; cin >> D;

    Resultado = A + (B / (C - D));

    cout.precision(2);
    cout << "\nEl resultado es: " << Resultado << "\n";

    return 0;
}