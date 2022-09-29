<h1> EXERCISE 1: Corresponding tax according to the amount of rent of the client<img src="UP210163_CPP/../../imagenes/porcentaje.png" width=40></h1>
<h2> Code structure (C++)</h2>

```c++
    /----Instanced Libraries----
    #include <iostream>
    #include <stdio.h>
    
    using namespace std;

    int main()
    //----Declaration of variables----
      int renta;
      int descuento=0;
      int pago=0;
      char texto1[40]="Impositivo correspondiente: ";
      char texto2[40]="Correspondiente a: $";


    //----Request rent amount to the user----
      cout<<"Ingresa el monto de tu renta mensualmente:";
      cin>>renta;
 
    //----Calculation and printing of taxes----
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
```

<h3>Principal function</h3>
<p> Show the user the corresponding tax to pay according to the total amount of rent </p>
<ol>
<li>The user enters the personal amount of rent
<li>The calculations corresponding to the amount entered are performed as follows:
<ol>
<ol type="a">
<li>If the amount is less than $10,000, the tax will be equal to: 5%
<li>If the amount is less than or equal to $10,000 or less than $20,000, the tax will be equal to: 15%
<li>If the amount is less than or equal to $20,000 or less than $35,000, the tax will be equal to: 20%
<li>If the amount is less than or equal to $35,000 or less than $60,000, the tax will be equal to: 30%
<li>If the amount is greater than or equal to $60,000, the tax will be equal to: 45%
</ol>

<h3> Final results</h3>
<ol type="A>
<li>For amount less than $10,000
    <img src="UP210163_CPP/../../imagenes/menor10.png">
<li>For an amount greater than or equal to $10,000 or less than $20,000
    <img src="UP210163_CPP/../../imagenes/menor20.png">
 <li>For an amount greater than or equal to $20,000 or less than $35,000
    <img src="UP210163_CPP/../../imagenes/menor35.png">
 <li>For an amount greater than or equal to $35,000 or less than $60,000
    <img src="UP210163_CPP/../../imagenes/menor60.png">
 <li>For amounts greater than or equal to $60,000
    <img src="UP210163_CPP/../../imagenes/mayor60.png">
 
