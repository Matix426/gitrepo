#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  ciag_rek.py
#  
#  a1 =2
#  an = an-1 * n^2 + 1

def wyraz(n):
    if n==2:
        return 
    return wyraz(n^2)


def main(args):
    n = int(input("Podaj liczbę: "))
    print(wyraz(n))
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
