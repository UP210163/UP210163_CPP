/* Unit 2. Use of do/while
   Author: Jeannelyn Avila Jimenez
   Date: 09/22/2022
   Description: Problem number six ""
*/

#include <iostream>
#include <math.h>

using namespace std;
float resolverEcuacion(float valor){
    return pow(valor,2)+3*(valor)+8;
}

 int main(){
    float a,b;
    float c=0;
    float ya=resolverEcuacion(a);
    float yb=resolverEcuacion(b);
    float yc=resolverEcuacion(c);

    cout<<"ingresa el valor de a:  ";
    cin>>a;
    cout<<"ingresa el valor de b:  ";
    cin>>b;

   c=(a+b)/2;

   



    return 0;
 }