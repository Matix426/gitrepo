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
	cout << "Podaj imię:";
    // cin >> imie;
    cin.getline(imie, 10); 
    cout << "Cześć, " <<imie <<"!" <<endl;
    cout << "Ile masz lat? ";
    cin >> wiek; 
    cout <<"Urodziłeś się w roku " << 2017 - wiek <<endl; 
    
	return 0;
}

