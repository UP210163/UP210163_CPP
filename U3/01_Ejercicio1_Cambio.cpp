/*
Date: 21/10/2022
Author: Jeannelyn Avila Jimenez.
Description: EJercicio 1 "Cambio"
*/
#include <iostream>
using namespace std;

void obtenerCambio(int);
void imprimirCambio();

int denominaciones[9]={500,200,100,50,20,10,5,2,1};
int cantidadBilletes[9]={0};
int residuo=0;

int main(){
    int dinero;

    cout<<"Ingresa el monto: ";
    cin>>dinero;
    obtenerCambio (dinero);
    imprimirCambio ();

return 0;
}
void obtenerCambio (int monto){
    
    for(int denominacion=0; denominacion<9; denominacion++){
        residuo=(denominacion==0)?monto:residuo;
        cantidadBilletes[denominacion]=residuo/denominaciones[denominacion];

        residuo=residuo%denominaciones[denominacion];
    }
}
void imprimirCambio(){
    for(int cambio=0; cambio<9;cambio++){
        string tipo;

        tipo=(cambio<5)?"Billetes":"Monedas";
        cout<<tipo<<" de $ "<<denominaciones[cambio]<<" : "<<cantidadBilletes[cambio]<<endl;
    }
}