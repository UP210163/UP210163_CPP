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
//-----Recursos utilizados por la PC en el juego
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

//-----Asignación de las variables constantes(variables que no cambian en todo el programa) 
//para el modo de juego contra la computadora

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

    if(modoDeJuego == 1){//Utilizada para indicar la parte del codigo y parametros a utilizar dado el modo de juego
        do
        {
            jugada = seleccionarJugada();
            casillaOcupada = comprobarCasillaOcupada(jugada);
            //Condicional que indica la repeticion del codigo por casilla ocupada
            if(casillaOcupada == true){
                do
                {
                    cout<<"Casilla ocupada, haz otro intento";
                    break;
                } while (casillaOcupada = true);
            }//-----------------------------------
            else
            {//Condicional que indica la continuacion del codigo porque no hay casilla ocupada
                system("clear");//Limpia toda la terminal 
                colocarJugada(jugada);//Una vez que ya se comprobo la casilla libre se coloca la jugada
                tableroJugador();//Rehace el tablero ya que se borro anteriormente
                turnoJugador++;//Aumenta el turno de jugador que sera utilizado en mas funciones(variable declarada en la linea 30)
            }
        ganador=revisarGanadorJugador(ganador);//Revisa que haya un ganador al termino de cada colocacion de jugada
        } while (ganador == false && turnoJugador < 9);//Condicional que se repetira mientras no haya un ganador y el turno sea menor a nueve
    if (turnoJugador < 9)
        {
            if (turnoJugador % 2 == 0)
            {
                cout << "Gano el jugador 2" <<endl;//Indica que el jugador 2 gana dado que sus turnos siempre seran pares y porque sus variables fueron definidas en colocar jugada 301
            }
            else
            {
                cout << "Gano el jugador 1" <<endl;//Indica que le jugador 1 gana ya que sus turnos son impares
            }
        }
        else
        {
            cout << "---Empate---" <<endl;//si los turnos pasan de 9 y no hay ganador la variable indica empate
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
    if (jugada != -1)//El -1 indica que si la computadora no esta en peligro de perder ni tampoco con posibilidad de ganar debe poner una jugada random
    {
        return jugada;
    }

    jugada= mejorJugada(JUGADOR);
    if (jugada != -1)//el -1 indica que si el jugador no lleva ventaja se colocara una random en el tablero
    {
        return jugada;
    }
    while (jugadaUtilizada== false)
    {
        jugadaUtilizada = comprobarCasillaOcupada(jugada);
        jugada = 1 + rand() % 9; // En caso de que ninguno ni otro, aleatoria
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
        {//Este apartado se encarga de simular las jugadas del jugador en el plano imaginario comprobando si hay peligro de que este gane
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
        do//Este apartado simula la jugada de la pc comprobando las jugadas ganadoras
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
