/*
 * wskazniki.cpp
 */

// zmienna przechowujaca adres komorki w pamieci

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int x = 13;
    double y = 10;
    double *wsk2;
    int *wsk1; //zmienna wskaznikowa
    wsk1 = &x; // inicjacja wskaznika
    wsk2 = &y;
    cout << x << endl;
    cout << wsk1 << endl;
    cout << &x << endl;
   
    *wsk1 += 1;
    cout << *wsk1 << endl; // wartosc ktora jest zapisana '*wsk1'
    
    wsk1 += 1;
    cout << wsk1 << endl; 
    
    cout << sizeof(x) <<endl;
    cout << sizeof(y) <<endl;
    cout << wsk2 << endl; 
    wsk2 += 1;
    
	return 0;
}

