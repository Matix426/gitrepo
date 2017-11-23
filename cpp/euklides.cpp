/*
 * euklides.cpp
 */


#include <iostream>

using namespace std;

int nwd_v1(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int nwd_v2(int a, int b)
{
    while (a > b)
    {
        a = a % b;
        b = b - a;
    }
    return b;
}



int main(int argc, char **argv)
{
    int a,b;
    cout << "Podaj liczbę: ";
    cin >> a;
    cout << "Podaj liczbę: ";
    cin >> b;

    cout << "Największy wspólny dzielnik (" << a << "," << b << ") = " <<nwd_v2(a,b)<<endl;
    
    
return 0;
}

