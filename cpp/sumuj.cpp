/*
 * Program pobiera i sumuje 10 liczb, wynik drukuje na ekranie.
 */


#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)

{
    int liczba1, liczba2, liczba3, liczba4, liczba5, liczba6, liczba7, liczba8, liczba9, liczba10;
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;
    cout << "Podaj trzecia liczbe: ";
    cin >> liczba3;
    cout << "Podaj czwarta : ";
    cin >> liczba4;
    cout << "Podaj piata liczbe: ";
    cin >> liczba5;
    cout << "Podaj szosta liczbe: ";
    cin >> liczba6;
    cout << "Podaj siodma liczbe: ";
    cin >> liczba7;
    cout << "Podaj osma liczbe: ";
    cin >> liczba8;
    cout << "Podaj dziewiata liczbe: ";
    cin >> liczba9;
    cout << "Podaj dziesiata liczbe: ";
    cin >> liczba10;
    
    cout << "Suma liczb wynosi: "  <<endl
     << liczba1 + liczba2 + liczba3 + liczba4 + liczba5 + liczba6 + liczba7 + liczba8 + liczba9 + liczba10 << endl;
   
    return 0;
    
    
}

