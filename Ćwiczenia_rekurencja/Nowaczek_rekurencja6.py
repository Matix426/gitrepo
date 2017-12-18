#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  rekurencja6_Nowaczek.py
#  

def nwd_rek(a, b):
    if b==0:
        return a
    return nwd_rek(b, a%b)

def main(args):
    a = int(input("Podaj liczbę: "))
    b = int(input("Podaj liczbę: "))
    
    assert nwd_rek(5,10) == 5
    assert nwd_rek(3,9) == 3
    assert nwd_rek(5,20) == 5
    
    print("Największy wspólny dzielnik ({:d}, {:d}) = {:d}".format(a, b, nwd_rek(a, b)))  
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
