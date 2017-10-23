/*
 * tabele.cpp
 */


#include <iostream>

using namespace std;

void pobierzliczby(int tab[], int ile)
{
    int i = 0;
    for(i = 0; i<ile; i++)
    {
       cout <<"Podaj liczbę: ";
       cin >>tab[i];
        
    }
    
    
}

void sumuj(int tab[], int ile) {
  
    int i = 0;
    int suma = 0;
    for(i = 0; i<ile; i++)
    {
        //cout << liczby[i] << " ";
        suma+= tab[i];
    }
        cout <<"Suma liczb: "  <<suma<<endl;
}

void najmniejsza(int tab[], int ile){
     
     int min = tab[0];
     int n = 0;
     for(int i = 0; i<n;i++)
     {
       if(min > tab[i])
       min=tab[i];  
    }
    
    cout <<"Najmniejsza: " << min <<endl;

}

int main(int argc, char **argv)
{
    int rozmiar =0;
    cout<< "Ile liczb podasz?: ";
    cin >>rozmiar;
 
 
    int liczby[rozmiar];
    
    
    pobierzliczby(liczby, rozmiar);
    sumuj(liczby, rozmiar);
    najmniejsza(liczby, rozmiar);    
    
    
    return 0;
}

