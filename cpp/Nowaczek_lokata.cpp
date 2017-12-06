/*
 * Nowaczek_lokata.cpp
 */


#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
    int suma, ile, wplata;
    cout << "Wprowadz ilosc wplat: "; 
    cin >> ile;
    wplata = 100;
    suma = 0;
    
    for(int i =0; i<ile; i++) 
    {
        suma += wplata;
        wplata += 10;
    }
cout << "Ostatnia wplata wyniosla: " << wplata-10 <<endl;
cout << "Stan konta: " << suma << endl;

}
