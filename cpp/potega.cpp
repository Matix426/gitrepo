/*
 * potega.cpp
 * a0 = 1
 * a1 = a
 * an = a*...*a(n-czynnikow) dla n zawiera N+ -{1}
 */

#include <iostream>

using namespace std;

float potega_it(float x, int n){
    float wynik = 1;
    for(int i=1;n;i++){
        // testuje ilość powtórzeń pętli
        cout << i << endl;
        wynik=wynik*x;
        
        
    }
    return wynik;
}

int main(int argc, char **argv)
{
    //pobierz od użytkownika podstawę i wykładnik
    
    float x=0;
    int n=0;
    
    cout <<"Podaj podstawę: " <<endl;
    cin >> x;
    cout <<"Podaj wykladnik: " <<endl;
    cin >> n;
    
    cout <<"Potęga: " <<potega_it(x, n) <<endl;
    
    return 0;
}

