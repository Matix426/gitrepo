/*
 * fibonacci.cpp
 */


#include <iostream>

using namespace std;
 
int a, b;
int x=0;
int y=1;
 
int main()
{
    cout << "Podaj wyraz ciągu Fibonacciego: " ;
    cin>>a;
    if(a==0)
        cout<<"0";
    else if(a==1)
        cout<<"1";
    else {
        cout<<x<<endl;
        cout<<y<<endl;
}
 
    for(int i=1;i<a;i++) {
    b=x+y;
    cout<<b<<endl;
    x=y;
    y=b;
 
}
 
 
 
    return 0;
}
