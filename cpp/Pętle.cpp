/*
 * Pętle.cpp
 */


#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char **argv)
{
    int liczby[50];
    int i = 0;
    int licznik = 0;
    srand(time(NULL));  //liczby pseudolosowe
    
    for(i = 0 ; i < 50 ; i++)
    {
        liczby[i] = rand() % 100;
    }
    
    for(i = 0 ; i < 50 ; i++)
    {
        cout << liczby[i] <<" ";
        if(liczby[i] % 2 == 0)
        {
            licznik++;
        }
    }
    
    cout << endl;
    cout << "Liczby parzyste: " << licznik <<endl;    
    
    
	
    return 0;
}

