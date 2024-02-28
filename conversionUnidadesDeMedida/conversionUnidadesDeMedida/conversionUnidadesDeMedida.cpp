// conversionUnidadesDeMedida.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*4. Diseñe un programa que solicite al usuario el ingreso de un número entero, el cual
representa X metros. Ese valor lo deberá convertir a kilómetros, a centímetros y a
milímetros.*/

#include <iostream>
using namespace std;

int main()
{
    //declaramos las variables
    int metro, medidaCenti, medidaMili;
    double medidaKilo;
    //le pedidos que ingrese un numero;
    cout << "Ingrese un numero entero: ";
    cin >> metro;
    //proceso de convertir a respectivas unidades
    medidaKilo = metro / 1000.0;// 1 km = 1000 m
    medidaCenti = metro * 100;//1 m = 100 cm
    medidaMili = metro * 1000;// 1 m = 1000 mm
    //Mostramos los mensajes y resultados
    cout << metro << " metros equivalen a:" << endl;
    cout << medidaKilo << " kilómetros." << endl;
    cout << medidaCenti << " centímetros." << endl;
    cout << medidaMili<< " milímetros." << endl;
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
