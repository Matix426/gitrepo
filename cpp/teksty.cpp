/*
 * teksty.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int i=0;
    for(i=65; i < 91; i++)
    {
        cout << i << " " <<char(i) <<endl;
        
    }
    
    for(i=97; i < 123; i++)
    {
        cout << i << " " <<char(i) <<endl;
        
    }
    
    char osoba[25];
    cout <<"Podaj imię i nazwisko: "<<endl;
    //cin >> osoba;
    cin.getline(osoba, 25); //liczba którą podajemy musi być taka sama jak zadeklarowana
    cout << "Cześć " << osoba << endl;
    
    
/*
    char znak ='a';
    char znak2 ='b';
    cout << znak << " " << int(znak) <<endl;
    cout << znak2 << " " << int(znak2) <<endl;


*/

    
    
    
    
	return 0;
}

