// 2. Escribe la siguiente expresión: a + b / c + d

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float A, B, C, D, Resultado = 0;

    cout << "Ingrese el primer numero: "; cin >> A;
    cout << "Ingrese el segundo numero: "; cin >> B;
    cout << "Ingrese el tercer numero: "; cin >> C;
    cout << "Ingrese el cuarto numero: "; cin >> D;

    Resultado = (A + B) / (C + D);

    cout.precision(2);
    cout << "\nEl resultado es: " << Resultado << endl;

    return 0;
}
