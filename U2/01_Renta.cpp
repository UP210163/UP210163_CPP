/* Unidad 2. Uso del if else
   Autor: Jeannelyn Avila Jimenez
   Fecha: 22/09/2022
   Descripción: Problema número uno "Renta"
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  
  int renta;
  int descuento=0;
  int pago=0;

  cout<<"Ingresa el monto de tu renta mensualmente:";
  cin>>renta;

  if(renta<10000){
    cout<<"Impositivo correspondiente: "<<"5%"<<endl;
    descuento= (renta/100)*5;
    
  }

if(renta >=10000 && <= 20000){
    cout<<"Impositivo correspondiente: "<<"15%"<<endl;
  }
    return 0;
}