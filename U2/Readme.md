
<h1 align="left"> 
EXERCISE 1: Corresponding tax according to the amount of rent of the client<img src="UP210163_CPP/../../imagenes/porcentaje.png" width=40>
</h1>
<h2> Code structure (C++)</h2>
<div><h4>Input</h4></div>


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
 
 ```
 
 <div><h4>Process & Output </h4></div>


```c++

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

## Principal function
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
<ol type="A">
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
</ol>
 
 <br><br><br>

<h1 align="left"> 
EXERCISE 2: Benefits (Bonus assigned according to scores)<img src="UP210163_CPP/../../imagenes/beneficios.png" width=55></h1>
<h2> Code structure (C++)</h2>
<div><h4>Input</h4></div>

```c++
                                                                                                              
#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    //----Declaration of variables----
          double calificacion;
          int calculo;
          float bono;
          int cont=1;
          string texto1="??Thank you very much for preferring us!...";
          
    //----Data collection----
    cout<<"Enter your score: ";
    cin>>calificacion;
    
 ```

 <div><h4>Process & Output </h4></div>


```c++
    
//----Bonus calculation-----
    calculo=calificacion*2400;

//----Bonus Allocation----   
   if(calificacion==0.0){
    bono=0;
    cout<<"Unacceptable score : "<<endl;
  
   }
   else if(calificacion==0.4){
   bono=0.4;
  
   }
   else if (calificacion>=0.6){
   bono= 0.6;
   
   }
   else{
    cout<<"Invalid punctuation."<<endl;
    cont=0;
   }
   //----Voucher printing----
   if(cont==1){
     cout<<"Your bonus is: "<<bono<<"%"<<endl;
   cout<<"Corresponding to: $"<<calculo<<endl;
   cout<<texto1<<endl;
   }

    return 0;
}
                              
```
## Principal function
<p> This program consists of assigning employees their bonus corresponding to their performance score; the score must be [0.0, 0.4 or greater than 0.6], any other score outside the established ones will be rejected. The percentage equal to your performance score where 100% percent is $2400 and 0% is $0. </p>
<ol>
<li>User enters their score
<li>If the user enters a value other than 0, 0.4 or a number greater than 0.6, the program will not advance and will throw a warning message
<li>If the user enters a valid value, it prints the corresponding bond along with the amount to which it is creditor
</ol>
<br><br>

<h3> Final results</h3>
<ol type="A">
<li>For a score of 0.0
    <img src="UP210163_CPP/../../imagenes/E2_0.0.png">
<li>For a score of 0.4
    <img src="UP210163_CPP/../../imagenes/E2_0.4.png">
 <li>For a score of 0.6
    <img src="UP210163_CPP/../../imagenes/E2_0.6.png">
  </ol>
 
 <br><br><br>
 
 
<h1 align="left"> 
 EXERCISE 3: Tickets (Price corresponding to pay according to your age) <img src="UP210163_CPP/../../imagenes/boleto.png" width=55></h1>
<h2> Code structure (C++)</h2>
<div><h4>Input</h4></div>

```c++

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
//----Declaration of variables-----
    int edad;
    int entrada=0;
//-----Data entry-----
    cout<<"Enter your age: ";
    cin>>edad;
    
```

 <div><h4>Process & Output </h4></div>


```c++
    
//-----Calculation of the entry price-----
   if(edad<4){
    entrada=0;
    cout<<"??Your entry is free!"<<endl;
   }
   else if(entrada>=4 && entrada <=18){
    entrada=5;
   }
   else{
    entrada=10;
   }
//-----Final price printing-----
   cout<<"The price of your ticket is: $"<<entrada<<endl;
   cout<<"??Thanks for your preference!"<<endl;


return 0; 
}
                                              
```

## Principal function
<p> This program works based on the age entered by the user, depending on their age a price will be assigned to their ticket</p>
<ol>
<li>The user enters his age
<li>The program begins to assign the price that corresponds to it
<li>The price to pay is printed on the screen
</ol>
<br><br>

<h3> Final results</h3>
<ol type="A">
<li>For less than 4 years
    <img src="UP210163_CPP/../../imagenes/E3_3.png">
<li>For more than 4 years or less than 18 years
    <img src="UP210163_CPP/../../imagenes/E3_7.png">
 <li>For over 18 years
    <img src="UP210163_CPP/../../imagenes/E3_19.png">
 </ol>
 
 <br><br><br>
 
 
<h1 align="left"> 
 EXERCISE 4: Pizza (Sample of the menu according to the client's selection) <img src="UP210163_CPP/../../imagenes/pizza.png" width=55><h1/>
<h2> Code structure (C++)</h2>
<div><h4>Input</h4></div>

```c++

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
//----Declaration of variables----
    int pizza;
    int ingredientes;

//----Request rental amount from the user----
    cout << "Do you want a Vegetarian (Digit 1) or Non-Vegetarian (Digit 2) pizza)?" << endl;
    cin >> pizza;
    
```

 <div><h4>Process & Output </h4></div>


```c++
                                                                                    
//-----Printing of the selected menu----
    if (pizza == 1)
    {
        cout << "Vegetarian Ingredients: " << endl;
        cout << "2. Pepper" << endl;
        cout << "3. Tofu" << endl;
        cout << "Enter the number of the ingredient of your choice: " << endl;
        cin >> ingredientes;
        if (ingredientes == 2)
        {
            cout << "ORDEN:" << endl;
            cout << "Vegetarian pizza" << endl;
            cout << "Ingredients: " << endl;
            cout << "Mozzarella cheese, tomato sauce and pepper" << endl;
         
        }
        else
        {      
            cout << "ORDEN:" << endl;
            cout << "Vegetarian pizza" << endl;
            cout << "Ingredients: " << endl;
            cout << "Mozzarella cheese, tomato sauce and tofu" << endl;
        }
    }
    else if (pizza == 2)
    {
        cout << "Non Vegetarian Ingredients: " << endl;
        cout << "4.Pepperoni" << endl;
        cout << "5.Ham" << endl;
        cout << "6.Salmon" << endl;
        cout << "Enter the number of the ingredient of your choice: " << endl;
        cin >> ingredientes;
        if (ingredientes == 4)
        {
            cout << "ORDEN:" << endl;
            cout << "Non Vegetarian Pizza" << endl;
            cout << "Ingredients: " << endl;
            cout << "Mozzarella cheese, Tomato sauce and Pepperoni" << endl;
        }
        else if (ingredientes == 5)
        {
            cout << "ORDEN:" << endl;
            cout << "Non Vegetarian Pizza" << endl;
            cout << "Ingredients: " << endl;
            cout << "Mozzarella cheese, Tomato sauce and Ham" << endl;
        }
        else
        {
            cout << "ORDEN:" << endl;
            cout << "Non Vegetarian Pizza" << endl;
            cout << "Ingredients: " << endl;
            cout << "Mozzarella cheese, Tomato sauce and salmon" << endl;
        }
    }
    else
    {
        cout << "Invalid option";
    }
    

    return 0;
}
                                
```
## Principal function
<p> This program is based on taking the client's order with the established options and at the end its complete order is printed to be seen by the user.</p>
<ol>
<li>The program asks the user what type of pizza he wants
<li>With the previous information, the menu corresponding to this selection is displayed.
<li>At the end, the user can view their complete order to check that it is correct.
</ol>
<br><br>

<h3> Final results</h3>
<ol type="A">
<li>Vegetarian pizza selection menu
    <img src="UP210163_CPP/../../imagenes/E4_VE.png">
<li>Selection menu of a non-vegetarian pizza
    <img src="UP210163_CPP/../../imagenes/E4_NOV.png">
 </ol>
 
 <br><br><br>
 
 
<h1 align="left"> 
  EXERCISE 5: Temperatures (calculation of the average, minimum and maximum amount according to the temperature given by the user)<img src="UP210163_CPP/../../imagenes/clima.png" width=55><h1/>
<h2> Code structure (C++)</h2>
<div><h4>Input</h4></div>

```c++

#include <iostream>

using namespace std;

int main(){
//----Declaration of variables----
    float temperatura;
    float sumAcum = 0;
    int min = 9999, max = -9999;
    int cont = 1;

//-----Data collection-----
    do
    {
        cout << "Give me the temperature: " << endl;
        cin >> temperatura;
        sumAcum +=temperatura;

        cont ++;
        if (temperatura <= min)
        {
            min=temperatura;
        }
        if (temperatura >= max)
        {
            max=temperatura;
        }
    } while (cont <=6);
                       
```
<div><h4>Process & Output </h4></div>


```c++
    
//-----Printing of the results----- 
    cout << "The average of temperature today is : " << sumAcum/6 <<endl;
    cout << "The minimum temperature :" << min<< endl;
    cout << "The maximum temperature :" << max << endl;

return 0;
}
    
```
## Principal function
<p> This program collects temperatures given by the user to carry out the following procedure</p>
<ol>
<li>User enters 6 temperatures.
<li>The program adds these temperatures to calculate the average between them.
<li>The program does a search between the highest and the lowest temperature.
<li>Finally the results are printed.
</ol>
<br><br>

<h3> Final results</h3>
<ol type="A">
<li>Temperature calculation example
<img src="UP210163_CPP/../../imagenes/E5ej.png">
 </ol>
 
 <br><br><br>

<h1 align="left"> 
  EXERCISE 6: Products (Calculating an invoice based on product prices)<img src="UP210163_CPP/../../imagenes/producto.png" width=55><h1/>
<h2> Code structure (C++)</h2>
<div><h4>Input & Process</h4></div>

```c++
                                                                                                                       
//----Declaration of variables----
        int cant,precio;
        int total=0,fac=0;
        int cont=0;
//-----Data collection-----

        do{
            cout<<"Enter the number of products: ";
            cin>>cant;
            if(cant==0){
                cout<<"Finalizing invoice..."<<endl;
                break;
            }
            cout<<"Enter the price of the product: $";
            cin>>precio;
           
            total=cant*precio;
            fac=total+fac;
                                                     
```
<div><h4> Output </h4></div>

```c++
                                                     
  }while (cant!=0); 
      
          cout<<"The total of your bill is: $"<<fac<<endl;
        

    return 0;
 }
```
## Principal function
<p> This program collects both quantity and price of various items provided by the user.</p>
<ol>
<li>The user enters the quantity of the product.
<li>After entering the price of said product.
<li>If you want to finalize the invoice, type 0.
<li>The program prints the total.
</ol>
<br><br>

<h3> Final results</h3>
<ol type="A">
<li>Invoice example
    <img src="UP210163_CPP/../../imagenes/E6ej.png">
 </ol>
 
 <br><br><br>

<h1 align="left"> 
  EXERCISE 7: Decimal to Binary (Convert a number from decimal system to binary system)<img src="UP210163_CPP/../../imagenes/codigo-binario.png" width=70><h1/>
<h2> Code structure (C++)</h2>
<div><h4>Input</h4></div>

```c++
    
#include <iostream>

using namespace std;
 int main(){
    //----Declaration of variables----
    int num;
    string resultado;
//-----Data collection-----
    do{

        cout<<"Ingresa el numero a convertir: ";
        cin>>num;
    
```
<div><h4>Process & Output </h4></div>
    
```c++
    
if(num>0){
            cout<<"Mayor a cero"<<endl; 
            while(num!=0){
            if(num%2==0){
            resultado='0'+resultado;//The current result with the previous
            }
            else 
            resultado='1'+resultado;
            num/=2;
            
        }
        }
        else if(num==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<"Menor a cero"<<endl;
        }
   
    

    }while(num<0);
    cout<<resultado<<endl;


    return 0;
 }
                          
```
## Principal function
<p> The only and main function is to convert a number in decimal system entered by the user to a binary system.</p>
<ol>
<li>The user enters a number in the decimal system.
<li>The program executes the conversion process.
<li>The number previously entered is now printed in decimal system.
</ol>
<br><br>

<h3> Final results</h3>
<ol type="A">
<li>Conversion of number 15 in Decimal to Binary
    <img src="UP210163_CPP/../../imagenes/E7ej.png">
 </ol>
 
 <br><br><br>
<h1 align="left"> 
  EXERCISE 8: Multiplication table (Printing the numerical table of a number)<img src="UP210163_CPP/../../imagenes/multiplicar.png" width=55><h1/>
<h2> Code structure (C++)</h2>
<div><h4>Input</h4></div>

```c++
                                                                                                                             
#include <iostream>

using namespace std;
 int main(){
 //----Declaration of variables----
   int num,lon;
   int mul=0,cont=0;

//-----Data collection-----
   cout<<"Ingresa un n??mero: ";
   cin>>num;
   cout<<"Longitud de la tabla: ";
   cin>>lon;
                                 
```
<div><h4>Process & Output </h4></div>
                                 
```c++
for(int i=0;i<lon;i++){
    for(int j=0;j<=48;j++){
         cout<<"-";
         
      }
      cout<<endl;
      mul=num*i;
      cout<<"|"<<"\t"<<num<<"\tx"<<"\t"<<i<<"\t="<<"\t"<<mul<<"\t|"<<endl;
   

    
   }


    return 0;
 }
```
## Principal function
<p> This program prints the number table of a number in a table format using the tab function.</p>
<ol>
<li>The user enters the main number of the table.
<li>Then the length of said table is entered.
<li>The program performs the calculation and accommodation of the data.
<li>The table is printed.
</ol>
<br><br>

<h3> Final results</h3>
<ol type="A">
<li>Conversion of number 15 in Decimal to Binary<br>
 <img src="UP210163_CPP/../../imagenes/E8ej.png">
 </ol>
 
 <br><br><br>
 
 <h1 align="left"> 
  EXERCISE 9: Bisection method<img src="UP210163_CPP/../../imagenes/producto.png" width=55><h1/>
<h2> Code structure (C++)</h2>
<div><h4>Input & Process</h4></div>

```c++
                                                                                                                       
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
                                                     
```

## Principal function
<ol>
 <li> Ask the user for the range (a and b).
 <li> Obtain the point c.
 <li> Get the y-values when its value is a, b and c.
 <li> If the Y(c) value is greater than or equal to 0.01 or less than or equal to -0.01 enter a while loop.
<ol/>
<ol>
<li> Enter an If to select half.
<li> if ((ya * yc) < 0) then b=c, otherwise a=c.
<li> Get the y values with the new values.
<li> When Y(c) is between 0.01 and -0.01 exit the while.
<ol/>
<h3> Final results</h3>
<ol type="A">
<li>Example
    <img src="UP210163_CPP/../../imagenes/Raiz9.png">
 </ol>
 
 <br><br><br>





