/* Unit 2. Use of do/while
   Author: Jeannelyn Avila Jimenez
   Date: 09/22/2022
   Description: Problem number six ""
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


float resolverEcuacion(float valor){
   
    return pow(valor,2)-(3*valor)-12;
}



int main(){
    int cont=1;
    float a,b,c,ya,yb,yc;
    cout << "Give me the value of a: ";
    cin >> a;
    cout << "Give me the value of b: ";
    cin >> b;
    c = (a+b)/2;
    ya= resolverEcuacion(a);
    yb= resolverEcuacion(b);
    yc= resolverEcuacion(c);
     for (int i=0; i<137; i++)
    {
        cout<< "~";
    }
    cout<< "\n";
    if ((yb>0 && ya<0) || (ya>0 && yb<0)){
    cout<< "|\t NO.\t|\t a\t|\t b\t|\t c \t|\t f(a) \t\t|\t f(b) \t\t|\t f(c) \t\t| \n";
    for (int i=0; i<137; i++)
    {
        cout<< "~";
    }
    cout<< "\n";
    cout<< "| \t" << cont << "\t|\t" << fixed << setprecision(3) << a << "\t|\t" << b << "\t|\t" << c << "\t|\t" << ya << "\t\t|\t" << yb << "\t\t|\t" << yc << "\t\t|\n"; //First data before anything
    for (int i=0; i<137; i++)
    {
        cout<< "~";
    }
    cout<< "\n";

        while (yc>=0.01 || yc<=-0.01)
        {
            if ((yc>0 && ya<0) || (ya>0 && yc<0))
            {
                b = c;
            }
            else
            {
                a = c;
            }
            
            c = (a+b)/2;
            ya = resolverEcuacion(a);
            yb = resolverEcuacion(b);
            yc = resolverEcuacion(c);
            cont++;
            cout<< "| \t" << cont<< "\t|\t" << fixed << setprecision(3) << a << "\t|\t" << b << "\t|\t" << c << "\t|\t" << ya << "\t\t|\t" << yb << "\t\t|\t" << yc << "\t\t|\n";
            for (int i = 0; i <137; i++)
            {
                cout<< "~";
            }
            cout<< "\n";
        }
    cout<< "--The root is approximately "<< setprecision(1) <<c<<"--"<<endl;
    }
    else
    {
        cout << "~There's no root between the numbers~"<<endl;
    }
    return 0;
}