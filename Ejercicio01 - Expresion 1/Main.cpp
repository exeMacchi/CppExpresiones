// 1. Escribe la expresi�n a/b + 1

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    float A{}, B{}, Resultado{};

    cout << "Ingrese el primer n�mero: "; cin >> A;
    cout << "Ingrese el segundo n�mero: "; cin >> B;

    Resultado = (A / B) + 1;

    cout.precision(2);
    cout << "\nEl resultado es: " << Resultado << "\n";
    return 0;
}