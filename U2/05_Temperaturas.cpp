/* Unit 2. Use of do/while
   Author: Jeannelyn Avila Jimenez
   Date: 09/22/2022
   Description: Problem number five "Temperature"
*/

#include <iostream>

using namespace std;

int main(){
//----Declaration of variables----
      int cont=1, cont1;
      float temperatura=0,may, men, cont2;
      float sumaTem=0;
    

      do{
        cout<<"Give me the temperature: ";
        cin>>temperatura;
        sumaTem+=temperatura;
        may=temperatura;
        men=temperatura;
        cont++;
          if(men<cont1){
            cont1=men;
        }
         if(may>cont2){
            cont2=may;
        }

      }while(cont<=6);
      
      cout<<"The average of temperature today is: "<<sumaTem/6<<endl;
      cout<<"Mayor: "<<cont2<<endl;
      cout<<"Smaller: "<<cont1<<endl;


}
