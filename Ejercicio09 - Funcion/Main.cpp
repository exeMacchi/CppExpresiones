// 9. Realice un programa que calcule el valor que toma la siguiente función 
//    para unos valores dados de X e Y: ƒ(x,y) = √x / y²-1

#include <iostream>
#include <math.h>

using std::cout;
using std::cin;

int main()
{
    float X{}, Y{}, F{};

    cout << "Valor de X: "; cin >> X;
    cout << "Valor de Y: "; cin >> Y;

    F = (sqrt(X)) / (pow(Y, 2) - 1);

    cout << "\nEl resultado es: " << F << "\n";

    return 0;
}