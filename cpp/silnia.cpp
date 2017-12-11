/*
 * silnia.cpp
 */


#include <iostream>

using namespace std;
 
int silnia_rek(int a)
{
    if (a < 2)
        return 1;
    return silnia_rek(a-1) * a;
}

int main()
{
    int a;
    int wynik = 1;
 
    cout << "Podaj liczbę naturalną: ";
    cin >> a;
 
    for (int i = 1; i<=a;i++)
        wynik*= i;
 
    cout <<"Silnia: " <<silnia_rek(a) << endl;
 
    return(0);
}
