/*
 * hello.cpp
*/


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    float r;
    r=0;
    
    cout<<"Podaj długość promienia: ";
    cin>>r;
    cout <<"Pole wynosi " << M_PI * pow(r,2) <<endl
        <<"Obwód wynosi " << 2 * M_PI * r <<endl;

	return 0;
}
