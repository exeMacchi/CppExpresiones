// 2. Escribe la siguiente expresi�n: a + b / c + d

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");
    
    float A{}, B{}, C{}, D{}, Resultado{};

    cout << "Ingrese el primer n�mero: "; cin >> A;
    cout << "Ingrese el segundo n�mero: "; cin >> B;
    cout << "Ingrese el tercer n�mero: "; cin >> C;
    cout << "Ingrese el cuarto n�mero: "; cin >> D;

    Resultado = (A + B) / (C + D);

    cout.precision(2);
    cout << "\nEl resultado es: " << Resultado << "\n";

    return 0;
}