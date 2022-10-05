/* Unit 2. Use of do/while
   Author: Jeannelyn Avila Jimenez
   Date: 09/22/2022
   Description: Problem number five "Temperature"
*/

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
//-----Printing of the results----- 
    cout << "The average of temperature today is : " << sumAcum/6 <<endl;
    cout << "The minimum temperature :" << min<< endl;
    cout << "The maximum temperature :" << max << endl;

return 0;
}
