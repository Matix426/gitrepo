/*
 * fibonacci.cpp
 */


#include <iostream>

using namespace std;
 
int a, b;
int x=0;
int y=1;
 
int fib_rek(int a)
{
    if (a < 2)
        return 1;
    return fib_rek(a - 1) + fib_rek(a - 2);
}



int main(int argc, char **argv)
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

    cout<<"Ciąg liczby wynosi: "<<fib_rek(a) <<endl;
 
 
    return 0;
}
