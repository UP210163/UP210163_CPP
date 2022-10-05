/* Unit 2. Benefits Ex2
   Author: Jeannelyn Avila Jimenez
   Date: 09/26/2022
   Description: Problem number two "Benefits"
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    //----Declaration of variables----
          double calificacion;
          int calculo;
          float bono;
          int cont=1;
          string texto1="¡Thank you very much for preferring us!...";
          
    //----Data collection----
    cout<<"Enter your score: ";
    cin>>calificacion;
//----Bonus calculation-----
    calculo=calificacion*2400;

//----Bonus Allocation----   
   if(calificacion==0.0){
    bono=0;
    cout<<"Unacceptable score : "<<endl;
  
   }
   else if(calificacion==0.4){
   bono=0.4;
  
   }
   else if (calificacion>=0.6){
   bono= 0.6;
   
   }
   else{
    cout<<"Invalid punctuation."<<endl;
    cont=0;
   }
   //----Voucher printing----
   if(cont==1){
     cout<<"Your bonus is: "<<bono<<"%"<<endl;
   cout<<"Corresponding to: $"<<calculo<<endl;
   cout<<texto1<<endl;
   }

    return 0;
}

