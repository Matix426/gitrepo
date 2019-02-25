/*
 * wskazniki.cpp
 */

// zmienna przechowujaca adres komorki w pamieci

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int roz=20;
    int tab[roz]; //nazwa tablicy jest wskaznikiem!!
    
    int *wsk1; //zmienna wskaznikowa
    wsk1 = tab; // inicjacja wskaznika
    cout << tab <<endl;
    cout << wsk1 <<endl;
    
    *wsk1 = 10;
    cout << tab[0] <<endl;
    
    wsk1 ++;
    *wsk1 = 12;
    
	return 0;
}

