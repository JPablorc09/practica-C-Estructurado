// depreciacion.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*2- Se desea calcular el monto de depreciación de una computadora para los próximos
3 años, cuyo valor inicial fue de ¢525 710.
Se estima que la depreciación será del 5% sobre el valor que tenga la computadora
cada año. Deseamos conocer el monto de depreciación de cada uno de los 3 años
y el valor de la computadora al final de su vida útil.*/

#include <iostream>
using namespace std;

int main()
{
    // Valor inicial de la computadora
    double valorInicial = 525710.0;

    // Tasa de depreciación anual (porcentaje)
    double tasaDepreciacionAnual = 0.05; // 5%

    // Variables para almacenar el valor y la depreciación de la computadora para cada año
    double valorComputadora = valorInicial;
    double depreciacionTotal = 0.0;

    // Calcular la depreciación y el valor de la computadora para cada uno de los 3 años
    for (int año = 1; año <= 3; ++año) {
        // Calcular la depreciación para este año
        double depreciacionAnual = valorComputadora * tasaDepreciacionAnual;

        // Añadir la depreciación anual al total
        depreciacionTotal += depreciacionAnual;

        // Calcular el nuevo valor de la computadora después de la depreciación
        valorComputadora -= depreciacionAnual;

        // Mostrar la depreciación de este año
        cout << "Año " << año << ": Depreciación: ¢" << depreciacionAnual << endl;
    }

    // Mostrar el valor de la computadora al final de su vida útil
    cout << "Valor de la computadora al final de su vida útil: ¢" << valorComputadora << endl;

    // Mostrar la depreciación total durante los 3 años
    cout << "Depreciación total durante los 3 años: ¢" << depreciacionTotal << endl;

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
