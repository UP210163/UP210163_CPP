/* Unit 2. Use of if else
   Author: Jeannelyn Avila Jimenez
   Date: 09/28/2022
   Description: Problem number three "Inputs"
*/
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
