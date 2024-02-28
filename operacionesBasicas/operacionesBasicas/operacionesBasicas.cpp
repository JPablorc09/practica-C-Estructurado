// operacionesBasicas.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*1- Necesitamos aplicar las 4 operaciones básicas a 2 números cualquiera ingresados por
/el usuario, luego debe mostrar el resultado de dichas operaciones*/ 

#include <iostream>
using namespace std;

int main()
{
    int num1, num2,suma,resta,multiplicacion;
    double division;

    cout << "Ingrese el primer numero:\n ";
    cin >> num1;
    cout << "Ingrese el segundo numero:\n ";
    cin >> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;

    cout << "El resultado de la suma es:\n " << suma;
    cout << "\nEl resultado de la resta es:\n " << resta;
    cout << "\nEl resultado de la multipliacion es\n : " << multiplicacion;
    cout << "\nEl resultado de la division es:\n " << division;
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
