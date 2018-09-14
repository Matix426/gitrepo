#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  funkcje.py

import random 

def wypelnij(lista, ile, maks):
    for i in range(ile):
        lista.append(random.randint(0, maks))
    return lista 
    

def drukuj(lista):
    licznik = 0
    for liczba in lista:
        if not liczba % 2:
            licznik += 1    
    print('Liczby parzyste: ', licznik)
    
def suma_nieparzyste():
    licznik_1 = 0
    for liczba in lista:
        if not liczba % 2:
            licznik -= 1    
    print('Liczby nieparzyste: ', licznik_1)

def main(args):
    lista = []  #pusta lista
    ile = 75
    maks = 100
    wypelnij(lista, ile, maks)
    print(lista)
    drukuj(lista)
    suma_nieparzyste(lista)
    
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
