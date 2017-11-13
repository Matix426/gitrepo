/*
 * potega.cpp
 * a0 = 1
 * a1 = a
 * an = a*...*a(n-czynnikow) dla n zawiera N+ -{1}
 */

#include <iostream>
 
using namespace std;
 
float potega(float x, int n)
{
    float wynik = 1;
 
    for (int i = 0; i<n; i++)
        wynik*=x;
 
    return wynik;
}
 
int main()
{
    int a;
    int b;
 
    cout << "Podaj podstawę: ";
    cin >> a;
    cout << "Podaj wykladnik: ";
    cin >> b;
 
    cout <<"Potęga: " <<potega(a, b) <<endl;
 
    return 0;
}
