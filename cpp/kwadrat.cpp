/*
 * hello.cpp
*/


#include <iostream>
using namespace std; 

int main(int argc, char **argv)
{
    int bok =0; 
    cout <<"Podaj bok kwadratu " <<endl;
    cin >> bok;
    cout <<"Pole wynosi " << bok * bok <<endl
        <<"Obwód wynosi " << 4 *bok <<endl;
    
	return 0;
}

