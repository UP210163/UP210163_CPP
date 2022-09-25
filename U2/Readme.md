<h1> EJERCICIO 1: Impositivo correspondiente según el monto de renta del cliente</h1>
<h2> Estructura del código (C++)</h2>

    /----Librerías instanciadas----
    #include <iostream>
    #include <stdio.h>

    using namespace std;

    int main()
    //----Declaración de variables----
      int renta;
      int descuento=0;
      int pago=0;
      char texto1[40]="Impositivo correspondiente: ";
      char texto2[40]="Correspondiente a: $";


    //----Solicitar monto de renta a el usuario----
      cout<<"Ingresa el monto de tu renta mensualmente:";
      cin>>renta;
 
    //----Calculo e impresión  de los impositivos----
      if(renta<10000){
        cout<<texto1<<"5%"<<endl;
        descuento= (renta/100)*5;
        pago=descuento;
        cout<<texto2<<pago<<endl;
    
      }
      if(renta>=10000 && renta<20000){
        cout<<texto1<<"15%"<<endl;
        descuento= (renta/100)*15;
        pago=descuento;
        cout<<texto2<<pago<<endl;
    
      }
       if(renta>=20000 && renta<35000){
        cout<<texto1<<"20%"<<endl;
        descuento= (renta/100)*20;
        pago=descuento;
        cout<<texto2<<pago<<endl;
    
      }
       if(renta>=35000 && renta<60000){
       cout<<texto1<<"30%"<<endl;
        descuento= (renta/100)*30;
        pago=descuento;
        cout<<texto2<<pago<<endl;
    
      }
       if(renta>=60000){
        cout<<texto1<<"45%"<<endl;
        descuento= (renta/100)*45;
        pago=descuento;
        cout<<texto2<<pago<<endl;
    
      }
        return 0;
    }    

<h3> Función principal </h3>
<p> Mostral al usuario el impositivo correspondiente a pagar según el monto total de renta </p>
<ol>
<li>El usuario ingresa el monto personal de renta
<li>Se realizan los cálculos correspondientes a la cantidad ingresada de la siguiente manera:
<ol>
<ol type="a">
<li>Si el monto es menor a $10,000 el impositivo será igual a: 5%
<li>Si el monto es menor o igual a $10,000 o menor que $20,000 el impositivo será igual a: 15%
<li>Si el monto es menor o igual a $20,000 o menor que $35,000 el impositivo será igual a: 20%
<li>Si el monto es menor o igual a $35,000 o menor que $60,000 el impositivo será igual a: 30%
<li>Si el monto es mayor o igual a $60,000 el impositivo será igual a: 45%
</ol>

<h3> Resultados Finales</h3>
<ol>
<li>Para Monto menor a $10,000
<img src= "imagenes/menor10.png">
