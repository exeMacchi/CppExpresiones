// 3. Escriba la siguiente expresión: a + b/c / d + e/f

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float A, B, C, D, E, F, Resultado = 0;

    cout << "Numero A: "; cin >> A;
    cout << "Numero B: "; cin >> B;
    cout << "Numero C: "; cin >> C;
    cout << "Numero D: "; cin >> D;
    cout << "Numero E: "; cin >> E;
    cout << "Numero F: "; cin >> F;

    Resultado = (A + (B / C)) / (D + (E / F));

    cout.precision(2);
    cout << "\nEl resultado es: " << Resultado << endl;
    return 0;
}
