/*
 * sort_wybor.cpp
 */


#include <iostream>
#include <time.h>

using namespace std;

void wypelnij(int t[], int n, int max)
{   
    srand(time(NULL)); // inicjacja generatora liczb pseudolosowych
    for (int i=0; i<n; i++)
    {   
        t[i] = 1 + rand() % max; // losowanie liczb calkowitych < 0; maks>
        
        
    }
}

void drukuj(int t[], int n)
{   
    for (int i=0; i<n; i++)
    {   
       cout << t[i] << " ";
    }
    cout << endl;
}

void zamien(int &a, int &b) //zainicjowana zmienna zapamietujaca dana wartosc
{
    int tmp = a;
    a = b;
    b = tmp;
}


void sort_babel(int tab[], int n)
{
         //buuble sort
    cout<<"**************Sortowanie babelkowe**************" <<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(tab[j] > tab[j+1])
                zamien(tab[j], tab[j+1]);
            
        }
        
    }
    
       
}

int main(int argc, char **argv)
{
	const int ile = 10;
    int tab[ile];
    wypelnij(tab, ile, 20);
    drukuj(tab, ile);
    sort_babel(tab, ile);
    drukuj(tab, ile);
	return 0;
}

