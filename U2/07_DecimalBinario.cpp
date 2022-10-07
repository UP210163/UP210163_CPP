/* Unit 2. Use of do/while
   Author: Jeannelyn Avila Jimenez
   Date: 09/22/2022
   Description: Problem number six ""
*/

#include <iostream>

using namespace std;
 int main(){
    int num;
    string resultado;

    do{

        cout<<"Ingresa el numero a convertir: ";
        cin>>num;

        if(num>0){
            cout<<"Mayor a cero"<<endl; 
            while(num!=0){
            if(num%2==0){
            resultado='0'+resultado;//El resultado actual con el anterior
            }
            else 
            resultado='1'+resultado;
            num/=2;
            
        }
        }
        else if(num==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<"Menor a cero"<<endl;
        }
   
    

    }while(num<0);
    cout<<resultado<<endl;


    return 0;
 }
 