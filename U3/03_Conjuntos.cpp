/*
Date: 21/10/2022
Author: Jeannelyn Avila Jimenez.
Description: EJercicio 1 "Cambio"
*/
#include <iostream>
using namespace std;
  int main (){

    int conjunto [5][5];

for(int row=0; row<5; row++){
    for(int col=0; col<5; col++){
        cout<<"valor :";
        cin>>conjunto[row][col];
    }
}

for(int row=0; row<5; row++){
    for(int col=0; col<5; col++){
        cout<<conjunto[row][col]<<"\t";
    }
    cout<<endl;
    
}


    return 0;
  }