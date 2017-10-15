/*
 * hello.cpp
*/


#include <iostream>
using namespace std; 

int main(int argc, char **argv)
{
	//char imie; // delaracja zmiennej znakowej
	char imie[10]; // delaracja zmiennej tablicowej
    int wiek; 
    wiek = 0; //inicjacja zmiennej 
    cout << "Witaj :D" << endl;
	cout << "Podaj imie:";
    // cin >> imie;
    cin.getline(imie, 10); 
    cout << "Czesc, " <<imie <<"!" <<endl;
    cout << "Ile masz lat? ";
    cin >> wiek; 
    cout <<"Urodziles sie w roku " << 2017 - wiek <<endl; 
    
	return 0;
}

