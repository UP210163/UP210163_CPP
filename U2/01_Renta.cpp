/* Unidad 2. Uso del if else
   Autor: Jeannelyn Avila Jimenez
   Fecha: 22/09/2022
   Descripción: Problema número uno "Renta"
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  //----Declaración de variables----
  int renta;
  int descuento=0;
  int pago=0;
  char texto1[40]="Impositivo correspondiente: ";
  char texto2[40]="Correspondiente a: ";


//----Solicitar monto de renta a el usuario----
  cout<<"Ingresa el monto de tu renta mensualmente:";
  cin>>renta;
 
//----Calculo e impresión  de los impositivos----
  if(renta<10000){
    cout<<texto1<<"5%"<<endl;
    descuento= (renta/100)*5;
    pago=descuento;
    cout<<texto2<<pago<<endl;
    
  }
  if(renta>=10000 && renta<20000){
    cout<<texto1<<"15%"<<endl;
    descuento= (renta/100)*15;
    pago=descuento;
    cout<<texto2<<pago<<endl;
    
  }
   if(renta>=20000 && renta<35000){
    cout<<texto1<<"20%"<<endl;
    descuento= (renta/100)*20;
    pago=descuento;
    cout<<texto2<<pago<<endl;
    
  }
   if(renta>=35000 && renta<60000){
    cout<<texto1<<"30%"<<endl;
    descuento= (renta/100)*30;
    pago=descuento;
    cout<<texto2<<pago<<endl;
    
  }
   if(renta>=60000){
    cout<<texto1<<"45%"<<endl;
    descuento= (renta/100)*45;
    pago=descuento;
    cout<<texto2<<pago<<endl;
    
  }
    return 0;
}
