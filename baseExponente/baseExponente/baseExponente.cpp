// baseExponente.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*6- Solicite al usuario el ingreso de 2 números enteros, el primero representa la base y el
segundo el exponente. Determine cuál es el resultado de la operación.*/

#include <iostream>
using namespace std;

int main()
{
    //declaramos 2 variables
    int numero1,numero2;
    double resultado;
    //le pedimos al usuario que ingrese los 2 numeros
    cout << "Ingrese el primer numero (base): ";
    cin >> numero1;
    cout << "Ingrese el segundo numero (exponente): ";
    cin >> numero2;

    //operacion
    resultado = pow(numero1, numero2);

    cout << "El resultado es: \n"<<resultado;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
