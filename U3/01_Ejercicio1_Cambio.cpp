/*
Date: 21/10/2022
Author: Jeannelyn Avila Jimenez.
Description: EJercicio 1 "Cambio"
*/

#include <iostream>

using namespace std;

void obtenerCambio(int);

void imprimirCambio(int);

int quin = 0, doci = 0, cien = 0, cinc = 0, vein = 0, diez = 0, cinco = 0, dos = 0, uno = 0;

int main()
{
    int cant;
    cout << "Ingresa un monto: ";
    cin >> cant;
    obtenerCambio(cant);
    imprimirCambio(cant);
    return 0;
}
void obtenerCambio(int cambio)
{
    do
    {
        ((cambio - 500) >= 0) ? quin++, cambio -= 500 
       : ((cambio - 200) >= 0) ? doci++, cambio -= 200 
       : ((cambio - 100) >= 0) ? cien++, cambio -= 100 
       : ((cambio - 50) >= 0) ? cinc++, cambio -= 50 
       : ((cambio - 20) >= 0) ? vein++, cambio -= 20 
       : ((cambio - 10) >= 0) ? diez++, cambio -= 10 
       : ((cambio - 5) >= 0) ? cinco++, cambio -= 5 
       : ((cambio - 2) >= 0) ? dos++, cambio -= 2 
       : ((cambio - 1) >= 0) ? uno++, cambio -= 1 
       : uno;
    } while (cambio > 0);
}
void imprimirCambio(int cambio)
{
    cout << "Tu cambio es:  $" << cambio << "\n";
    cout << "Billete de $500: " << quin << endl;
    cout << "Billete de $200: " << doci << endl;
    cout << "Billete de $100: " << cien << endl;
    cout << "Billete de $50: " << cinc << endl;
    cout << "Billete de $20: " << vein << endl;
    cout << "Moneda de $10: " << diez << endl;
    cout << "Moneda de $5: " << cinco << endl;
    cout << "Moneda de $2: " << dos << endl;
    cout << "Moneda de $1: " << uno << endl;
}