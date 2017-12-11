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

    
    int a,b;
    cout << "Podaj licznik: ";
    cin >> a;
    cout <<"Podaj mianownik: ";
    cin >> b;
    
    int x = a/nwd(a,b);
    int y = b/nwd(a,b);
    
    cout <<"Ułamek skrócony: " << x << ":" y <<endl;
	
	return 0;
}

