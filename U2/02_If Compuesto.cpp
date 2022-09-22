/* Unidad 2. Uso del if else
   Autor: Jeannelyn Avila Jimenez
   Fecha: 01/09/2022
   Descripción: Muestra el uso del if else
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero
int main()
{
   int numero;
   int dato = 1;

   cout << "Ingresa un numero entero: ";
   cin >> numero;
   if (numero == dato){
    cout << "El número es igual a dato" << endl;
   }   
   else{
    cout << "El número es diferente del dato" << endl;
   }

    //Ejercicio: utilice las diferentes comparaciones ==, !=, <, >, <=, >=
    cout << "Ingresa un numero entero: ";
   cin >> numero;
if (numero != dato){
    cout << "El número es diferente a dato" << endl;
   }   
   else{
    cout << "El número es igual del dato" << endl;
   }
cout << "Ingresa un numero entero: ";
   cin >> numero;

   if (numero < dato){
    cout << "El número es menor que dato" << endl;
   }   
   else{
    cout << "El número es mayor  que dato" << endl;
   }
   cout << "Ingresa un numero entero: ";
   cin >> numero;

    
    if (numero > dato){
    cout << "El número es mayor que dato" << endl;
   }   
   else{
    cout << "El número es menor que dato" << endl;
   }
   cout << "Ingresa un numero entero: ";
   cin >> numero;

   if (numero <= dato){
    cout << "El número es menor o igual dato" << endl;
   }   
   else{
    cout << "El número es mayor que dato" << endl;
   }
   cout << "Ingresa un numero entero: ";
   cin >> numero;

    if (numero >= dato){
    cout << "El número es mayor o igual dato" << endl;
   }   
   else{
    cout << "El número es menor que dato" << endl;
   }


    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}