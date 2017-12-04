/*
 * algorytm1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a,n;
    int iloczyn=1;
    cout <<"Podaj n: ";
    cin>>n;
    for(int i=0; i!=n; i++)
    {
        cout <<"Podaj a: ";
        cin>>a;
        iloczyn = iloczyn*a;
    }
    cout << iloczyn;
    return 0;
}

    
    

