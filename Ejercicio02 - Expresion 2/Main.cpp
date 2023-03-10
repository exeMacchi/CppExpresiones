// 2. Escribe la siguiente expresión: a + b / c + d

#include <iostream>
#include <locale>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");
    
    float A{}, B{}, C{}, D{}, Resultado{};

    cout << "Ingrese el primer número: "; cin >> A;
    cout << "Ingrese el segundo número: "; cin >> B;
    cout << "Ingrese el tercer número: "; cin >> C;
    cout << "Ingrese el cuarto número: "; cin >> D;

    Resultado = (A + B) / (C + D);

    cout.precision(2);
    cout << "\nEl resultado es: " << Resultado << "\n";

    return 0;
}