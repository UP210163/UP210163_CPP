/* Unit 2. Use of do/while
   Author: Jeannelyn Avila Jimenez
   Date: 09/22/2022
   Description: Problem number six ""
*/

#include <iostream>

using namespace std;
 int main(){
//----Declaration of variables----
        int cant,precio;
        int total=0,fac=0;
        int cont=0;
//-----Data collection-----

        do{
            cout<<"Enter the number of products: ";
            cin>>cant;
            cout<<"Enter the price of the product: $";
            cin>>precio;
           
            if(cant==0){
                cout<<"Finalizing invoice..."<<endl;
                break;
            }
            total=cant*precio;
            fac=total+fac;
        }while (cant!=0); 
      
          cout<<"The total of your bill is: $"<<fac<<endl;
        

    return 0;
 }