/* 
    10. Escriba un programa que calcule las soluciones de una ecuación de 
        segundo grado de la forma:
           • ax^2 + bx + c = 0
        Teniendo en cuenta que
           • x = -b ± √b² - 4ac / 2a
*/          

#include <iostream>
#include <locale>
#include <math.h>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "es_ES");

    float A{}, B{}, C{}, X1{}, X2{}, Resultado1{}, Resultado2{};

    cout << "Número A: "; cin >> A;
    cout << "Número B: "; cin >> B;
    cout << "Número C: "; cin >> C;

    X1 = ((-(B)) + (sqrt((pow(B, 2)) - (4 * A * C)))) / (2 * A);

    X2 = ((-(B)) - (sqrt((pow(B, 2)) - (4 * A * C)))) / (2 * A);

    Resultado1 = (A * pow(X1, 2)) + (B * X1) + C;
    Resultado2 = (A * pow(X2, 2)) + (B * X2) + C;

    cout << "\n";
    cout << "X1: " << X1 << "\n";
    cout << "X2: " << X2 << "\n";
    cout << "\n";

    cout << Resultado1 << " = 0" << "\n";
    cout << Resultado2 << " = 0" << "\n";

    return 0;
}