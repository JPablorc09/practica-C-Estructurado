// precioArticulosDescuento.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*8. Debe crear un programa que solicite al usuario el ingreso del precio de 3 artículos de
oficina. Debe sumarlos y calcular el impuesto de venta del 9,75% y el descuento del
3%. Indique el monto de esos datos y el total a pagar*/

#include <iostream>
using namespace std ;

int main()
{
    // Definir las variables para almacenar los precios de los artículos
    double precio1, precio2, precio3;

    // Solicitar al usuario que ingrese el precio de cada artículo
    cout << "Ingrese el precio del primer artículo: ";
    cin >> precio1;
    cout << "Ingrese el precio del segundo artículo: ";
    cin >> precio2;
    cout << "Ingrese el precio del tercer artículo: ";
    cin >> precio3;

    // Calcular el total antes de impuestos
    double totalAntesImpuestos = precio1 + precio2 + precio3;

    // Calcular el impuesto de venta del 9.75%
    double impuestoVenta = totalAntesImpuestos * 0.0975;

    // Calcular el total con impuestos
    double totalConImpuestos = totalAntesImpuestos + impuestoVenta;

    // Calcular el descuento del 3%
    double descuento = totalConImpuestos * 0.03;

    // Calcular el total a pagar después del descuento
    double totalPagar = totalConImpuestos - descuento;

    // Mostrar los resultados
    cout << "Monto antes de impuestos:\n $" << totalAntesImpuestos;
    cout << "Impuesto de venta (9.75%):\n $" << impuestoVenta ;
    cout << "Total con impuestos:\n $" << totalConImpuestos ;
    cout << "Descuento (3%):\n $" << descuento;
    cout << "Total a pagar:\n $" << totalPagar;

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
