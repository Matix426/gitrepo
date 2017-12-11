/*
<<<<<<< HEAD
 * Cwiczenie1
=======
 * Nowaczek_ulamek.cpp
>>>>>>> 1456864bad9dbfcac36da8e71e59c9cb4aa1e651
 */


#include <iostream>

using namespace std;

<<<<<<< HEAD
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
=======
int nwd_v1(int a, int b)
{
	while (a != b)
	{	if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
>>>>>>> 1456864bad9dbfcac36da8e71e59c9cb4aa1e651
}


int main(int argc, char **argv)
{
<<<<<<< HEAD

    
    int a,b;
    cout << "Podaj licznik: ";
=======
    int a;
    int b;
    
    cout <<"Podaj licznik: ";
>>>>>>> 1456864bad9dbfcac36da8e71e59c9cb4aa1e651
    cin >> a;
    cout <<"Podaj mianownik: ";
    cin >> b;
    
<<<<<<< HEAD
    int x = a/nwd(a,b);
    int y = b/nwd(a,b);
    
    cout <<"Ułamek skrócony: " << x << ":" y <<endl;
=======
    int li;
    int mia;
    
    li=a/nwd_v1(a,b);
    mia=b/nwd_v1(a,b);
    
    
    cout <<"Ułamek skrócony: " << li << "/" << mia << endl;
>>>>>>> 1456864bad9dbfcac36da8e71e59c9cb4aa1e651
	
	return 0;
}

