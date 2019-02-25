/*
 * wspolrzedne.cpp
 */


#include <iostream>
using namespace std;


struct punkt{
    int x;
    int y;
    
}

struct wektor{
    punkt pp;
    punkt pk;
   
}

punkt wylicz_srodek(wektor w){
    punkt ps;
    ps.x = (float)((w.pp.x + w.pk.x) / 2);
    ps.x = (float)((w1.pp.y + w.pk.y) / 2);
    return ps;
    
    
    
}


wektor getWektor(){
    wektor w1;
    cout <<"Podah współrzędne punktu początkowego:/n";
    cin >> w1.pp.x;
    cin >> w1.pp.y;
    
    
    wektor w2;
    cout <<"Podah współrzędne punktu koncowego:/n";
    cin >> w2.pk.x;
    cin >> w2.pk.x;
    
    
    return wektor;
    
    
}

int main(int argc, char **argv)
{
    wektor w1 = getWektor();
    punkt ps = wylicz_srodek(w1);
    cout <<"Współrzedne wektora o punktach:\n";
    cout << "("<<w1.pp.x<<", "<<w1.pp.y;)"
    
    
	
	return 0;
}

