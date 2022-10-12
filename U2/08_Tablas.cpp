/* Unit 2. Use of do/while
   Author: Jeannelyn Avila Jimenez
   Date: 09/22/2022
   Description: Problem number six ""
*/

#include <iostream>

using namespace std;
 int main(){
   int num,lon;
   int mul=0,cont=0;


   cout<<"Ingresa un número: ";
   cin>>num;
   cout<<"Longitud de la tabla: ";
   cin>>lon;
 
     
for(int i=0;i<lon;i++){
    for(int j=0;j<=48;j++){
         cout<<"-";
         
      }
      cout<<endl;
      mul=num*i;
      cout<<"|"<<"\t"<<num<<"\tx"<<"\t"<<i<<"\t="<<"\t"<<mul<<"\t|"<<endl;
   

    
   }


    return 0;
 }