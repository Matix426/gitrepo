/*
 * sort_wstaw.cpp
 */


#include <iostream>

using namespace std;

void sort_wstaw(int n, int tab[])
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
	return 0;
}

