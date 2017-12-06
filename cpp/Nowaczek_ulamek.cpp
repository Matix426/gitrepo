/*
 * Nowaczek_ulamek.cpp
 */


#include <iostream>

using namespace std;

int nwd_v1(int a, int b)
{
	while (a != b)
	{	if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}


int main(int argc, char **argv)
{
    int a;
    int b;
    
    cout <<"Podaj licznik: ";
    cin >> a;
    cout <<"Podaj mianownik: ";
    cin >> b;
    
    int li;
    int mia;
    
    li=a/nwd_v1(a,b);
    mia=b/nwd_v1(a,b);
    
    
    cout <<"Ułamek skrócony: " << li << "/" << mia << endl;
	
	return 0;
}

