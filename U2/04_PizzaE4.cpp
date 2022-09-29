/* Unit 2. Use of if else
   Author: Jeannelyn Avila Jimenez
   Date: 09/28/2022
   Description: Problem number three "Inputs"
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
//----Declaration of variables----
    int pizza;
    int ingredientes;
    string ingred;
//----Request rental amount from the user----
    cout << "¿Desea una pizza Vegetariana (Digita 1) o No Vegetariana (Digita 2)?" << endl;
    cin >> pizza;
//-----Printing of the selected menu----
    if (pizza == 1)
    {
        cout << "Ingredientes Vegetarianos: " << endl;
        cout << "2. Pimiento" << endl;
        cout << "3. Tofu" << endl;
        cout << "Digita el número del ingrediente de tu preferencia: " << endl;
        cin >> ingredientes;
        if (ingredientes == 2)
        {
            cout << "ORDEN:" << endl;
            cout << "Pizza Vegetariana" << endl;
            cout << "Ingredientes: " << endl;
            cout << "Queso Mozarela, Salsa de tomate y Pimiento" << endl;
            ingred = "Pimiento";
        }
        else
        {
            cout << "ORDEN:" << endl;
            cout << "Pizza Vegetariana" << endl;
            cout << "Ingredientes: " << endl;
            cout << "Queso Mozarela, Salsa de tomate y Tofu" << endl;
        }
    }
    else if (pizza == 2)
    {
        cout << "Ingredientes  No Vegetarianos: " << endl;
        cout << "4.Pepperoni" << endl;
        cout << "5.Jamón" << endl;
        cout << "6.Salmón" << endl;
        cout << "Digita el número del ingrediente de tu preferencia: " << endl;
        cin >> ingredientes;
        if (ingredientes == 4)
        {
            cout << "ORDEN:" << endl;
            cout << "Pizza No Vegetariana" << endl;
            cout << "Ingredientes: " << endl;
            cout << "Queso Mozarela, Salsa de tomate y Pepperoni" << endl;
        }
        else if (ingredientes == 5)
        {
            cout << "ORDEN:" << endl;
            cout << "Pizza Vegetariana" << endl;
            cout << "Ingredientes: " << endl;
            cout << "Queso Mozarela, Salsa de tomate y Jamón" << endl;
        }
        else
        {
            cout << "ORDEN:" << endl;
            cout << "Pizza Vegetariana" << endl;
            cout << "Ingredientes: " << endl;
            cout << "Queso Mozarela, Salsa de tomate y Salmón" << endl;
        }
    }
    else
    {
        cout << "Opción inválida";
    }
    cout << ingred;

    return 0;
}
