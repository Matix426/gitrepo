#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sort_wstaw.py
#  


def sort_wstaw(lista):
    """Wersja liniowa"""
    for i in range(1, len(lista)):
        el = lista[i]
        k = i - 1
        while k >= 0 and lista[k] < el:  #  wyszukiwaniepozycji
            lista[k + 1] = lista[k]  #  przesuwanie elementow o 1 do gory
            k = k - 1
        lista[k + 1] = el
    return lista


def main(args):
    lista = [4, 3, 7, 0, 2, 3, 1, 9]
    print(lista)
    print(sort_wstaw(lista))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
