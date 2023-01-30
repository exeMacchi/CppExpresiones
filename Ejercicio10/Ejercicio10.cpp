// 10. Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma ax^2 + bx + c = 0, 
//     teniendo en cuenta que x = -b ± √b² - 4ac / 2a

#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float A, B, C, X1, X2, Resultado1, Resultado2;

    cout << "Numero A: "; cin >> A;
    cout << "Numero B: "; cin >> B;
    cout << "Numero C: "; cin >> C;

    X1 = ((-(B)) + (sqrt((pow(B, 2)) - (4 * A * C)))) / (2 * A);

    X2 = ((-(B)) - (sqrt((pow(B, 2)) - (4 * A * C)))) / (2 * A);

    Resultado1 = (A * pow(X1, 2)) + (B * X1) + C;
    Resultado2 = (A * pow(X2, 2)) + (B * X2) + C;

    cout << endl;
    cout << "X1: " << X1 << endl;
    cout << "X2: " << X2 << endl;
    cout << endl;
    cout << Resultado1 << " = 0" << endl;
    cout << Resultado2 << " = 0" << endl;
    return 0;
}
