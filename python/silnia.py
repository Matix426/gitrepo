#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  silnia.py
#  n! = 1 dla n={0,1}
#  n! = 1 * ... * n dla N+ - {1}
#  n! = (n-1)! * n

def silnia_it(n):
    wynik =1
    for i in range(2, n+1):
        wynik = wynik*i
    return wynik
    
def silnia_rek(n):
    if n < 2:
        return 1
    return silnia_rek(n-1) * n

def main(args):
    n = int(input('Podaj liczbę naturalną: '))
    assert type(n) == int
    assert silnia_it(0) == 1



    print('Silnia: ', silnia_rek(n))


    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
