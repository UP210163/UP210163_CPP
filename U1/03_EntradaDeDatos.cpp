/*Unidad 1. Entrada de datos
Autor: Jeannelyn Avila Jimenez
Fecha: 21/09/2022
Descripción: Muestra la forma de ingresar tipos de datos por el usuario
*/
#include <iostream>
#include <stdio.h>

//Libreria para manejo de entradas y salida de pantalla
using namespace std;

//Función principal de tipo entero
int main()
{

    int entero;
    float flotante;
    double grande;
    char caracter;
    
    cout << "Este programa muestra el ingreso de datos por el usuario. \n";
    cout << "Ingresa un dato de tipo entero: ";
    cin >> entero;
    cout << "El dato ingresado es: " <<entero<<endl;
    
    cout <<"El número entero guardado es: "<<entero<<endl;

    
    cout << "Ingresa un dato de tipo flotante: ";
    cin >> flotante;
    cout << "El dato ingresado es: " <<flotante<<endl;
    cout <<"El número flotante guardado es: "<<flotante<<endl;

    cout << "Ingresa un dato de tipo caracter: ";
    cin >> caracter;
    cout << "El dato ingresado es: " <<caracter<<endl;
    cout <<"El caracter guardado es: "<<caracter<<endl;

    cout << "Ingresa un dato de tipo grande: ";
    cin >> grande;
    cout << "El dato ingresado es: " << grande << endl;
    cout <<"El número grande guardado es: "<<grande<<endl;


    printf("Usando la función printf y scanf\n");
    printf("Ingresa un dato de tipo entero: ");
    scanf("%d", &entero);
    printf("El dato ingresado es: %i \n", entero);
    
    printf("Ingresa un dato de tipo flotante: ");
    scanf("%f", &flotante);
    printf("El dato ingresado es: %f \n", flotante);

    printf("Ingresa un dato de tipo caracter: ");
    scanf("%c", &caracter);
    printf("El dato ingresado es: %c \n", caracter);

 return 0;
}