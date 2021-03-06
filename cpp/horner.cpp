/*
 * horner.cpp
 */


#include <iostream>

using namespace std;

// W(x) = 2x^3 + 3x^2 + 5x + 4
// W(x) = x(2x^2 + 3x + 5) + 4
// W(x) = x( x (2x+3) + 5) + 4

float horner_it(int k, float tbwsp[], float x) {
    int i;
    float wynik = tbwsp[0];
    for(i = 1; i < k + 1; i++)
    {
        wynik = wynik*x + tbwsp[i];
    }
    return wynik;
}   

int horner_rek(float tbwsp[],int stopien, float x)
{
  if(stopien==0)
    return tbwsp[0];
 
  return horner_rek(tbwsp,stopien-1,x)* x + tbwsp[stopien];
}


int main(int argc, char **argv)
{
    int stopien = 3; //stopien wielomianu
    float x; 
    float tbwsp[4]; // nazwa tabeli i ilosc wspolczynnikow
    
    cout << "Podaj x: ";
    cin >> x;
    for(int i = 0; i<4; i++)
    {
        cout <<"Podaj wspolczynnik: ";
        cin >> tbwsp[i];  
    }
        cout << horner_rek(tbwsp,stopien,x) << endl;
    return 0;
}

