/*
Date: 3/10/2022
Author: Jeannelyn Avila Jimenez.
Description: EJercicio "Juego del Gato"
*/

#include <iostream>

using namespace std;
void tablero();
int main()
{
    char planogato[6][11];
    for (int row = 0; row < 6; row++)
    {
        for (int  col = 0; col < 11; col++)
        {
        
            if (col == 3 || col == 7){
            planogato[row][col]='|';
            }else if (row==1 || row == 3){
                planogato[row][col]='_';
            }
            else {
               planogato[row][col]=' '; 
            }
            
        }
    }
    for (int row = 0; row < 6; row++)
    {
        for (int  col = 0; col < 11; col++)
        {
            cout << planogato[row][col];
        }
        cout << endl;
    }
    return 0;
}
void tablero(){

}