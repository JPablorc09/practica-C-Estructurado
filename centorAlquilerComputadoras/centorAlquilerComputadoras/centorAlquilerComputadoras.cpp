// centorAlquilerComputadoras.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*3- En un centro de alquiler de computadoras cobran 49 colones por minuto. Si María
José utilizó la computadora durante 2 horas y 38 minutos, cuál es el total de dinero
que tendrá que pagar por el servicio.*/

#include <iostream>
using namespace std;

int main()
{
    //declaramos la variables
    int horas = 2;
    int minutos = 38;
    double tarifaMinutos = 49.0;
    //calculamos las minutos utilizados
    int totalMinutos = horas * 60 + minutos;
    //calculamos el precio total apagar
    int totalPagar = totalMinutos * tarifaMinutos;
    //Mostramos el siguiente mensaje
    cout << "Maria tendra que pagar: \n" << totalPagar << " Colones";
    return 0;
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
