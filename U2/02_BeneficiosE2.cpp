/* Unidad 2. Beneficios Ej2
   Autor: Jeannelyn Avila Jimenez
   Fecha: 26/09/2022
   Descripción: Problema número dos "Beneficios"
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    //----Declaración de variables----
          double calificacion;
          int calculo;
          float bono;
          int cont=1;
          char texto1[40]="¡Muchas Gracias por Preferirnos!...";
          
    //----Recolección de datos----
    cout<<"Ingresa tu puntuación: ";
    cin>>calificacion;
//----Cálculo del bono-----
    calculo=calificacion*2400;

//----Asignación del bono----   
   if(calificacion==0.0){
    bono=0;
    cout<<"Puntuación inaceptable : "<<endl;
  
   }
   else if(calificacion==0.4){
   bono=0.4;
  
   }
   else if (calificacion>=0.6){
   bono= 0.6;
   
   }
   else{
    cout<<"Puntuación inválida."<<endl;
    cont=0;
   }
   //----Impresión del bono----
   if(cont==1){
     cout<<"Tu bono es de: "<<bono<<"%"<<endl;
   cout<<"Correspondiente a: $"<<calculo<<endl;
   cout<<texto1<<endl;
   }


  


    return 0;
}

