#include <iostream>
#include <math.h>
using namespace std;

    int main() 
    {
        int selection;
        double value_K, constant_U;
    
        cout << "Ingrese la base y el exponente n.\n";
        cout << "| U: "; cin >> constant_U;
        cout << "| K: "; cin >> value_K; cout << endl;
        cout << "La derivada es: " << constant_U * value_K << "(x)^" << value_K - 1 << endl;
        cout << "FORM: n(x)^(n-1)\n\n";
        printf("n\n\t Programa realizado por Isaaa <3");

    return 0;
    }