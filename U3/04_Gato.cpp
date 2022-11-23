/*
Date: 3/10/2022
Author: Jeannelyn Avila Jimenez.
Description: EJercicio "Juego del Gato"
*/
#include <iostream>

using namespace std;

char coordenadasMatriz[6][11];
void tableroJugador();
char areaDeJuego[3][3] = {{'1', '2', '3'}, {'4', '5', '6'},{'7', '8', '9'}};
int seleccionarJugada();
bool comprobarCasillaOcupada(int jugada);
void colocarJugada(int jugada);
void modoDeJuego(int);
//-----Resources used by the PC in the game
int mejorJugada(char);
void colocarJugadaPCenX(int);
void colocarJugadaPCenO(int);
void areaPC();
char areaDeJuegoPC[3][3] = {{'1', '2', '3'}, {'4', '5', '6'},{'7', '8', '9'}};
int turnoPC();
bool comprobarCasillaOcupadaPC(int);
bool revisarGanadorJugador(int jugada);
bool revisarGanadorPC(int);
//------------------------------------------------
int turnoJugador = 0;

//-----Assignment of constant variables (variables that do not change throughout the program)
//for the game mode against the computer

const char PC = 'O';
const char JUGADOR = 'X';
//-------------------------------------------------


int main(){
    int jugada;
    int modoDeJuego;
    bool casillaOcupada = true;
    bool ganador = false;


    cout<< "-TIC TAC TOE-\n \n";
    tableroJugador();
    cout<< "Selecciona el modo de juego: \n|--------------------------|\n|1. Jugador 1 VS Jugador 2 | \n|2. Jugador 1 VS PC        |      \n|Opcion: ";
    cin>> modoDeJuego;

    if(modoDeJuego == 1){//Used to indicate the part of the code and parameters to use given the game mode
        do
        {
            jugada = seleccionarJugada();
            casillaOcupada = comprobarCasillaOcupada(jugada);
           //Conditional that indicates the repetition of the code for occupied cell
            if(casillaOcupada == true){
                do
                {
                    cout<<"Casilla ocupada, haz otro intento";
                    break;
                } while (casillaOcupada = true);
            }//-----------------------------------
            else
            {//Conditional that indicates the continuation of the code because there is no box occupied
                system("clear");//Clean the whole terminal
                colocarJugada(jugada);// Once the free box has been checked, the move is placed
                tableroJugador();//Redos the board since it was previously deleted
                turnoJugador++;//Increases the player turn that will be used in more functions (variable declared in line 30)
            }
        ganador=revisarGanadorJugador(ganador);//Check that there is a winner at the end of each play placement
        } while (ganador == false && turnoJugador < 9);//Conditional that will be repeated while there is no winner and the turn is less than nine
    if (turnoJugador < 9)
        {
            if (turnoJugador % 2 == 0)
            {
                cout << "Gano el jugador 2" <<endl;// Indicates that player 2 wins since his turns will always be even and because his variables were defined in place move 301
            }
            else
            {
                cout << "Gano el jugador 1" <<endl;// Indicates that player 1 wins since his turns are odd
        }
        else
        {
            cout << "---Empate---" <<endl;  //if the turns exceed 9 and there is no winner, the variable indicates a tie
        }
    }
    else if (modoDeJuego == 2)
    {
        do
        {
            if (turnoJugador% 2 == 0)
            {
                jugada = seleccionarJugada();
            }
            else
            {
                jugada = turnoPC();
            }

            casillaOcupada = comprobarCasillaOcupada(jugada);
            if (casillaOcupada == true)
            {
                do
                {
                    cout << "Casilla ocupada, haz otro intento" <<endl;
                    break;
                } while (casillaOcupada == true);
            }
            else if (casillaOcupada == false)
            {
                system("clear");
                colocarJugada(jugada);
                tableroJugador();
                turnoJugador++;
            }
            ganador = revisarGanadorJugador(ganador);
        } while (ganador == false && turnoJugador < 9);
        if (turnoJugador < 9)
        {
            if (turnoJugador % 2 == 0)
            {
                cout << "Perdiste brouu jsjsjs" <<endl;
            }
            else
            {
                cout << "Ganaste uwu" <<endl;
            }
        }
        else
        {
            cout << "Empate" <<endl;
        }
    }
    
    return 0;
}

int turnoPC()
{
    int jugada;
    bool jugadaUtilizada = false;
    jugada = mejorJugada(PC);
    if (jugada != -1)//The -1 indicates that if the computer is not in danger of losing nor with the possibility of winning, it must place a random play
    {
        return jugada;
    }

    jugada= mejorJugada(JUGADOR);
    if (jugada != -1)// the -1 indicates that if the player does not have an advantage, a random will be placed on the board
    {
        return jugada;
    }
    while (jugadaUtilizada== false)
    {
        jugadaUtilizada = comprobarCasillaOcupada(jugada);
        jugada = 1 + rand() % 9; // In case neither nor other, random
    }
    return jugada;
}

void areaPC()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            areaDeJuegoPC[row][col] = areaDeJuego[row][col];
        }
    }
}

bool comprobarCasillaOcupadaPC(int Jugada)
{
    int row = Jugada / 10;
    int col = Jugada - 1;
    if (areaDeJuegoPC[row][col] == 'X' || areaDeJuegoPC[row][col] == 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool revisarGanadorPC(int jugada){
    bool revisarGanador = false;
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if ((areaDeJuegoPC[0][posicion] == areaDeJuegoPC[1][posicion]) && (areaDeJuegoPC[0][posicion] == areaDeJuegoPC[2][posicion]))
        {
            revisarGanador = true;
            break;
        }
        else if ((areaDeJuegoPC[posicion][0] == areaDeJuegoPC[posicion][1]) && (areaDeJuegoPC[posicion][0] == areaDeJuegoPC[posicion][2]))
        {
            revisarGanador = true;
            break;
        }
        else if ((areaDeJuegoPC[posicion][posicion] == areaDeJuegoPC[posicion+1][posicion+1]) && (areaDeJuegoPC[posicion][posicion] == areaDeJuegoPC[posicion+2][posicion+2]))
        {
            revisarGanador = true;
            break;
        }
        else if ((areaDeJuegoPC[2][0] == areaDeJuegoPC[1][1]) && (areaDeJuegoPC[2][0] == areaDeJuegoPC[0][2]))
        {
            revisarGanador = true;
            break;
        }
    }
    return revisarGanador;
}

void colocarJugadaPCenX(int jugada)
{

    int row = jugada / 10;
    int col = jugada - 1;
    areaDeJuegoPC[row][col] = 'X';
}

void colocarJugadaPCenO(int jugada)
{
    int row = jugada / 10;
    int col = jugada - 1;
    areaDeJuegoPC[row][col] = 'O';
}

int mejorJugada(char entradaJugador)
{
    bool jugadaUsada= false;
    bool ganador = false;
    int jugadaPC = 0;
    areaPC();
    if (entradaJugador == 'X')
    {
        do
        {//This section is in charge of simulating the player's moves in the imaginary plane, checking if there is a danger that he will win
            jugadaPC++;
            jugadaUsada = comprobarCasillaOcupadaPC(jugadaPC);
            if (jugadaUsada == false)
            {
                colocarJugadaPCenX(jugadaPC);
                ganador = revisarGanadorPC(jugadaPC);
            }
            areaPC();
        } while (jugadaPC <= 9 && ganador == false);
    }
    else
    {
        do//This section simulates the play of the pc checking the winning moves
        {
            jugadaPC++;
            jugadaUsada = comprobarCasillaOcupadaPC(jugadaPC);
            if (jugadaUsada == false)
            {
                colocarJugadaPCenO(jugadaPC);
                ganador = revisarGanadorPC(jugadaPC);
            }
            areaPC();
        } while (jugadaPC <= 9 && ganador == false);
    }
    if (jugadaPC >= 10)
    {
        jugadaPC = -1;
    }
    return jugadaPC;
}



int seleccionarJugada(){

    int jugada;
    do
    {
        cout << "Dame tu jugada: ";
        cin >> jugada;
    } while (jugada < 0 || jugada > 9);
    return jugada;

}

bool comprobarCasillaOcupada(int jugada)
{
    int row = jugada / 10; 
    int col = jugada - 1;
    if (areaDeJuego[row][col] == 'X' || areaDeJuego[row][col] == 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void colocarJugada(int jugada)
{
    if (turnoJugador % 2 == 0)
    {
        int row = jugada / 10, col = jugada - 1;
        areaDeJuego[row][col] = 'X';
    }
    else
    {
        int row = jugada / 10, col = jugada - 1;
        areaDeJuego[row][col] = 'O';
    }
}

bool revisarGanadorJugador(int jugada){
    bool revisarGanador = false;
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if ((areaDeJuego[0][posicion] == areaDeJuego[1][posicion]) && (areaDeJuego[0][posicion] == areaDeJuego[2][posicion]))
        {
            revisarGanador = true;
            break;
        }
        else if ((areaDeJuego[posicion][0] == areaDeJuego[posicion][1]) && (areaDeJuego[posicion][0] == areaDeJuego[posicion][2]))
        {
            revisarGanador = true;
            break;
        }
        else if ((areaDeJuego[posicion][posicion] == areaDeJuego[posicion+1][posicion+1]) && (areaDeJuego[posicion][posicion] == areaDeJuego[posicion+2][posicion+2]))
        {
            revisarGanador = true;
            break;
        }
        else if ((areaDeJuego[2][0] == areaDeJuego[1][1]) && (areaDeJuego[2][0] == areaDeJuego[0][2]))
        {
            revisarGanador = true;
            break;
        }
    }
    return revisarGanador;
}

void tableroJugador(){
    int c1=0, f1=0;
    for(int row=0; row<6 ; row++){
        for(int col=0; col<11; col++){

            if(col==3 || col==7){
                coordenadasMatriz[row][col]='|';
            }
            else if (row==1 || row==3){
                coordenadasMatriz[row][col]='_';
            }
            
            else if (row!=5 &&(col ==9 || col== 5 || col==1))
            {
                coordenadasMatriz[row][col]= areaDeJuego[f1][c1];  
                c1++;
                if (c1 == 3)
                {
                    c1 = 0;
                    f1++;
                } 
            }
            
            else{
                coordenadasMatriz[row][col]=' ';
            }
        }
    }

    for(int f1=0; f1<6 ; f1++){
        for(int c1=0; c1<11; c1++){
            if (coordenadasMatriz[f1][c1]=='X')
            {
                cout<<coordenadasMatriz[f1][c1];
            }
            else if (coordenadasMatriz[f1][c1]=='O')
            {
                cout<<coordenadasMatriz[f1][c1];
            }
            else
            {
                cout<<coordenadasMatriz[f1][c1];
            }
        }
        cout<<"\n";
    }   
}
