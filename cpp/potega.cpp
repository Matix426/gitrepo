/*
 * potega.cpp
 * a0 = 1
 * a1 = a
 * an = a*...*a(n-czynnikow) dla n zawiera N+ -{1}
 */

#include <iostream>
 
using namespace std;
 
int potega_rek(int a, int n)
{
    if (n==0)
        return 1;
    return potega_rek(a, n-1) * a;
}


float potega(float a, int n)
{
    float wynik = 1;
 
    for (int i = 0; i<n; i++)
        wynik*=a;
 
    return wynik;
}
 
int main()
{
    int a;
    int n;
 
    cout << "Podaj podstawę: ";
    cin >> a;
    cout << "Podaj wykladnik: ";
    cin >> n;
 
    cout <<"Potęga: " << potega_rek(a, n)<<endl;
 
    return 0;
}
