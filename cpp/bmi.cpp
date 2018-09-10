/*
 * bmi.cpp
 */


#include <iostream>
using namespace std;

int main()
{
    float waga;
    float wzrost;
    float bmi;
    
    cout << "Podaj swoja wage: ";
    cin >> waga; 
    cout << "Podaj swoj wzrost w centymetrach: ";
    cin >> wzrost;
    bmi = (waga /(wzrost * wzrost)* 10000);
    cout << "Twoje bmi wynosi: " << bmi <<endl;
    cout << "Typ wagi: ";
    
    if(bmi < 18.5)
        cout << "Niedowaga" << endl;
    if(bmi >= 18.5 && bmi < 24.9)
        cout << "Norma" << endl;
    if(bmi >=25 && bmi < 30)
        cout << "Nadwaga" << endl;
    if(bmi >= 30)
        cout << "Otyłość" << endl;
   
    return 0;
}


