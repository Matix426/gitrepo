/*
 * stos.cpp
 */


#include <iostream>
using namespace std;

int rozmiar = 3;
int sp = 0;
int dane[3];

void push() {
    if (sp > rozmiar - 1){
        cout << "Stos pełny!" <<endl;
        } else {
            cout << "Podaj wartość: " <<endl;
            cin >> dane[sp];
            sp++;
        }
}

void pop() {
    if (sp-1 < 0){
        cout << "Stos pusty!" <<endl;
        } else {
            cout << "POP: " <<dane[sp-1] <<endl;
            sp--;
        }    
    
    
    
    
}

int main(int argc, char **argv)
{
    push();
    push();
    push();
    push();
    
    pop();
    pop();
    pop();
    pop();
	
	return 0;
}

