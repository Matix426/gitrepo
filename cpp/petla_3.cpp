/*
 * petla_3.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i;
    int suma=0;
    int liczba=0;
    
    for(i =0; i < 75; i++)
    {
    cout <<"Podaj liczbe: ";
    cin >> liczba;
    suma+=liczba;
    if (suma > 75)
            break; 

    }   
    cout <<"Suma liczb: " <<suma <<endl;
	
    return 0;
    
}

