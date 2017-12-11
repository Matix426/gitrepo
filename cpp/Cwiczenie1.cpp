/*
 * Cwiczenie1
 */


#include <iostream>

using namespace std;

int nwd(int a,int b)
{
    while(a!=b)
    {
       if(a>b)
           a-=b;
       else
           b-=a;
    }
    return a;
}


int main(int argc, char **argv)
{
    int licznik,mianownik;
    cout << "Podaj licznik: ";
    cin >> licznik;
    cout <<"Podaj mianownik: ";
    cin >> mianownik;
    
    int x = licznik/a;
    int y = mianownik/b;
    
    cout <<"Ułamek skrócony: " << x << ":" y <<endl;
	
	return 0;
}

