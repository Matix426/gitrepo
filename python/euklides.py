#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  euklides.py
#  


def nww_v1(a, b):
    while a != b:  # != "różne"
        if a > b:
            a = a - b
        else:
            b = b - a
    return a

def main(args):
    a = int(input("Podaj liczbę: "))
    b = int(input("Podaj liczbę: "))
    
    assert nww_v1(5,10) == 5
    assert nww_v1(3,9) == 3
    assert nww_v1(5,20) == 5
    
    print("Największy wspólny dzielnik ({:d}, {:d}) = {:d}".format(a, b, nww_v1(a, b)))  
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
