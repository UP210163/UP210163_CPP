/*
Date: 3/10/2022
Author: Jeannelyn Avila Jimenez.
Description: EJercicio "Juego del Gato"
*/

#include <iostream>

using namespace std;

void Estructura(int);
int Turno = 1;
char AreaJ[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int SeleccionarJugada();
void ReemplazarCasilla(int Jugada);
bool comprobarJugadaOcupada(int Jugada);
void ModoDeJuego(int);
bool VerificarGanador(int Jugada);


int main(){
    int tablero,jugador1,jugador2,computadora,jugada;
    bool casillaocupada = true, ganador = true;
    Tablero(tablero);
    ganador = VerificarGanador(jugada);
    do{
    jugada = SeleccionarJugada();
    casillaocupada = comprobarJugadaOcupada(jugada);
    if (casillaocupada == true)
    {
        do
        {
            cout << "Casilla invalida\n";
            break;
        } while (casillaocupada == true);
    }
    else if (casillaocupada == false)
    {
        system ("CLS");
        ReemplazarCasilla(jugada);
        Estructura(tablero);
        Turno++;
    }
    }while(ganador == false);
    return 0;
}



int SeleccionarJugada(){
    int Jugada;
    do
    {
    cout << "Dame tu jugada: \n";
    cin >> Jugada;
    } while (Jugada < 0 && Jugada >= 9);
    
    return Jugada;
}



bool comprobarJugadaOcupada(int Jugada){
int row = Jugada/10, col = Jugada-1; 
        if (AreaJ[row][col]=='X' || AreaJ[row][col]=='O')
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }

void ReemplazarCasilla(int Jugada){
    if (Turno%2==0){
    int row = Jugada/10, col = Jugada - 1;
    AreaJ[row][col]='O';
    }
    else
    {
    int row = Jugada/10, col = Jugada - 1;
    AreaJ[row][col]='X';
    }
    
}

void Tablero(int){
    int x=0, y=0;
    for (int fila = 0; fila < 5; fila++)
    {
            for (int columna = 0; columna < 9; columna++)
            {
                if (fila== 1 || fila == 3){
                    cout << "-";
                }else if (columna==1 || columna == 4 || columna == 7)
                {
                    cout << AreaJ[x][y];
                    y++;
                }else
                {
                    cout << " ";
                }
                if (columna==2 || columna == 5)
                {
                    cout<<"|";
                }
            }
        cout << "\n";
        if (fila%2==0)
        {
            x++;
        }
        
        y=0;
    }
}

bool VerificarGanador(int Jugada){
    int punto = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (AreaJ[row][col]=='X' || AreaJ[row][col]=='O')
            {
                punto++;
            }
            else if (AreaJ[col][row]=='X' || AreaJ[row][col] == 'O')
            {
                punto++;
            }
        }
        
    }
    if (punto>3)
    {
        return true;
    }else{
        return false;
    }
    
}