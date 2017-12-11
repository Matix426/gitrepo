#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py


def potega(podst, wykladnik):
    wynik = 1
    for i in range(0, wykladnik):
        wynik = wynik * podst
    return wynik

# potega_rek(a, 0) = 1 dla a roznego od 0
# potega_rek(a, n) = potega_rek(a, n-1) * a dla n=N+


def potega_rek(a, n):
    if n == 0:
        return 1
    return potega_rek(a, n-1) * a


def main(args):
    a = float(input('Podaj podstawę: '))
    n = int(input('Podaj wykładnik: '))
    assert potega(1, 1) == 1
    assert potega(2, 1) == 2
    assert potega(3, 3) == 27
    assert potega(2, 2) == 4
    assert potega(5, 2) == 25

    print('Potęga: ', potega_rek(a, n))

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
