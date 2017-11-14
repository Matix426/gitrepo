/*
 * silnia.cpp
 */


#include <iostream>

using namespace std;
 
int main()
{
    int a;
    int wynik = 1;
 
    cout << "Podaj liczbę naturalną: ";
    cin >> a;
 
    for (int i = 1; i<=a;i++)
        wynik*= i;
 
    cout <<"Silnia: " <<wynik << endl;
 
    return(0);
}
