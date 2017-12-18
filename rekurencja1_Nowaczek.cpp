/*
 * rekurencja1_Nowaczek.cpp
 */


#include <iostream>

using namespace std;


int ciag(int n)
{
    if (n==1) {
        return 1;
    } else {
        return ciag((n-1)+(2*n)+(n-2));
    }
}

int main(int argc, const char * argv[]) {
    
    int n;
    cout << "Podaj numer wyrazu ciagu: ";
    cin >> n;
    cout << "Wartosc tego wyrazu: " << ciag(n);
    
    return 0;
}

