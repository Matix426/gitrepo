/*
 * sort_wstaw.cpp
 */


#include <iostream>

using namespace std;

void sort_wstaw(int tab[], int n)
{
    int el, k;
    for(int i=1; i<n; i++)
    {
        el = tab[i]; 
        k = i-1;
        while(k>=0 && tab[k]>el) 
        {
            tab[k+1] = tab[k]; 
            k = k - 1;
        }
        tab[k+1] = el; 
     }     
}


int main(int argc, char **argv)
{
    int tab[];
    tab[0]= 4; 
    tab[1]= 3; 
    tab[2]= 7; 
    tab[3]= 0; 
    tab[4]= 2; 
    tab[5]= 3; 
    tab[6]= 1; 
    tab[7]= 9; 
    

    
    cout<<tab[i]<<;
    
    return 0;
}
