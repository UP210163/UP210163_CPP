/* Unit 2. Use of if else
   Author: Jeannelyn Avila Jimenez
   Date: 09/28/2022
   Description: Problem number three "Inputs"
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
//----Declaration of variables-----
    int edad;
    int entrada=0;
//-----Data entry-----
    cout<<"Ingresa tu edad: ";
    cin>>edad;
//-----Calculation of the entry price-----
   if(edad<4){
    entrada=0;
    cout<<"¡Tu entrada es gratuita!"<<endl;
   }
   else if(entrada>=4 && entrada <=18){
    entrada=5;
   }
   else{
    entrada=10;
   }
//-----Final price printing-----
   cout<<"El precio de tu entrada es: $"<<entrada<<endl;
   cout<<"¡Gracias por tu preferencia!"<<endl;


return 0; 
}
