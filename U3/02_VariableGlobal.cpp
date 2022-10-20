/* Unidad 3. Funciones
   Autor: Jeannelyn Avila Jimenez
   Fecha: 20/10/2022
   Descripción: Muestra el alcance de las variables, este es un programa que hace uso de variables globales
*/

#include <iostream>

using namespace std;

//Prototipado de funciones
void getDatos();
void operacion();

//Variables globales
float dato1, dato2;
float resultado;

//Función principal
int main(){

    getDatos();
    operacion();
   
    cout << "El resultado es: " << resultado << endl;

    return 0;
}

void getDatos(){
    cout << "Dame un número: ";
    cin >> dato1;
    cout << "Dame otro número: ";
    cin >> dato2;
}

void operacion(){
    resultado = dato1*dato2;
}