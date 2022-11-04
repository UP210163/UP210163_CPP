/*
Date: 3/10/2022
Author: Jeannelyn Avila Jimenez.
Description: EJercicio "Juego del Gato"
*/

#include <iostream>

using namespace std;


void hacerestructura();
int seleccionarJugada();
void convertirJugada(int jugada);
bool comprobarCasillaOcupada(int jugada);


char estructuraGato[3][3];
int row = 0;
int col = 0;
int jugada;


int main(){
   estructuraGato[2][1] = 'i';
    estructuraGato[2][2] = 'o';

    hacerestructura();
    seleccionarJugada();
    
    
    
    return 0;
}

void hacerestructura(){
    for(int fila = 0; fila < 6; fila++){
        for(int columna = 0; columna < 3; columna++){

            if(fila < 5 && fila%2 == 1){
                cout << "___";
            }else{
                if(fila < 5){
                    cout << " " << estructuraGato[row][col] << " ";
                    col++;
                }else{
                    cout << "   ";
                }
            }

            if(columna < 2){
                cout << "|";
            }
        }
        col = 0;
        if(fila % 2 == 0){
            row++;
        }
        cout << endl;
    }
}

int seleccionarJugada(){
    int jugada=0; 
    
    }





void convertirJugada(int jugada){
    if(jugada == 1){
        row = 0;
        col = 0;
    }else if(jugada == 2){
        row = 0;
        col = 1;
    }else if(jugada == 3){
        row = 0;
        col = 2;
    }else if(jugada == 4){
        row = 1;
        col = 0;
    }else if(jugada == 5){
        row = 1;
        col = 1;
    }else if(jugada == 6){
        row = 1;
        col = 2;
    }else if(jugada == 7){
        row = 2;
        col = 0;
    }else if(jugada == 8){
        row = 2;
        col = 1;
    }else if(jugada == 9){
        row = 2;
        col = 2;
    }
}


bool comprobarCasillaOcupada(int jugada){
    if(estructuraGato[row][col] == 'X' || estructuraGato[row][col] == 'O'){
        return true;
    }else{
        return false;
    }
}