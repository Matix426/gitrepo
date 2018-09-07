/*
 * imie.cpp
 * 
 * Copyright 2018  <>
 */


#include <iostream>
using namespace std; 

int main(int argc, char **argv)
{
	char imie[10];
    cout <<"Witaj, podaj imie: ";
    cin >> imie;
    cout << "Czesc, " <<imie <<"!" <<endl;
    
    int a, b;
    char dzialanie;
    cout <<"Jakie działanie chcesz wykonać:?";
    cin >> dzialanie;
    cout <<"Podaj a:";
    cin >> a;
    cout <<"Podaj b:";
    cin >> b;
    
    
    if (dzialanie == '+')
    cout << a + b << endl;
    else if (dzialanie == '-')
        cout << a - b << endl;
        
    if (dzialanie == '*')
        cout << a * b << endl;
    else if (dzialanie == '/')
        cout << a / b << endl;
    
    
}

