/* Unit 2. Use of if else
   Author: Jeannelyn Avila Jimenez
   Date: 09/22/2022
   Description: Problem number one "Rent"
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
//----Declaration of variables----
  int renta;
  int descuento=0;
  int pago=0;
  char texto1[40]="Impositivo correspondiente: ";
  char texto2[40]="Correspondiente a: ";


//----Request rental amount from the user----
  cout<<"Ingresa el monto de tu renta mensualmente:";
  cin>>renta;
 
//----Calculation and printing of taxes----
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
