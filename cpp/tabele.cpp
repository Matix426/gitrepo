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
     for(int i = 1; i<n;i++)
     {
       if(min < tab[i])
       min=tab[i];  
    }
    
    cout <<"Najmniejsza: " << min <<endl;

}

void ile5(int tab[], int ile)
{
         int i;
         int licznik5 = 0;
         for(i = 0; i<ile;i++)
         {
            if(tab[i]%5==0) 
            licznik5++;
            
        }
        cout <<"Podzielne przez 5: "<<licznik5<<endl;

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
    ile5(liczby, rozmiar);
    
    
                    
        
    
    
    return 0;
}

