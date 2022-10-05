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
    cout<<"Enter your age: ";
    cin>>edad;
//-----Calculation of the entry price-----
   if(edad<4){
    entrada=0;
    cout<<"¡Your entry is free!"<<endl;
   }
   else if(entrada>=4 && entrada <=18){
    entrada=5;
   }
   else{
    entrada=10;
   }
//-----Final price printing-----
   cout<<"The price of your ticket is: $"<<entrada<<endl;
   cout<<"¡Thanks for your preference!"<<endl;


return 0; 
}
