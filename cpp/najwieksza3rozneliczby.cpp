/*
 * hello.cpp
*/


#include <iostream>
using namespace std; 

int main(int argc, char **argv)
{
    int a, b, c;
    a = b = c = 0;
    cout <<"Podaj 3 rozne liczby " <<endl <<endl;
    while(a==b || a==c || b==c)
    {
    cout<<"Podaj pierwsza liczbe: " <<endl;
    cin>>a;
    cout<<"Podaj druga liczbe: " <<endl;
    cin>>b;
    cout<<"Podaj trzecia liczbe: " <<endl;
    cin>>c;
}
    if (a>b && a>c)
    cout<<"Najwieksza liczba jest a! ";

    else if (b>a && b>c)
    cout<<"Najwieksza liczba jest b! ";

    else
    cout<<"Najwieksza liczba jest c! ";
    	
        return 0;
}

